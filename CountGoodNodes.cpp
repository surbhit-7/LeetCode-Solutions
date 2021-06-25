//Difficulty :- Medium
// Question Link :- https://leetcode.com/problems/count-good-nodes-in-binary-tree/
//Problem Statement :-
/*
Given a binary tree root, a node X in the tree is named good if in the path from root to X there are no nodes with a value greater than X.

Return the number of good nodes in the binary tree.

 

Example 1:

Input: root = [3,1,4,3,null,1,5]
Output: 4
Explanation: Nodes in blue are good.
Root Node (3) is always a good node.
Node 4 -> (3,4) is the maximum value in the path starting from the root.
Node 5 -> (3,4,5) is the maximum value in the path
Node 3 -> (3,1,3) is the maximum value in the path.

Example 2:

Input: root = [3,3,null,4,2]
Output: 3
Explanation: Node 2 -> (3, 3, 2) is not good, because "3" is higher than it.

Example 3:

Input: root = [1]
Output: 1
Explanation: Root is considered as good.
*/
//Code :-/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int cnt = 0 ;
    int countNodes(TreeNode *root,int currMax)
    {

        if(root->val >= currMax){
            cnt++;
            currMax = root->val;
        }
         if(root->left)countNodes(root->left,currMax);
         if(root->right)countNodes(root->right,currMax);
        return cnt ;
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL and root->right == NULL)
            return 1;
        
        countNodes(root,root->val);
        return cnt;
    }
};
