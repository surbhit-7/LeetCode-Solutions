//DIFFICULTY :- Easy
//LINK :- https://leetcode.com/problems/invert-binary-tree/
/*
Problem Statement :-
Given the root of a binary tree, invert the tree, and return its root.

 

Example 1:

Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]

Example 2:

Input: root = [2,1,3]
Output: [2,3,1]

Example 3:

Input: root = []
Output: []

*/
//CODE :
class Solution {
public:
    TreeNode*check(TreeNode* root)
    {
        if(root==NULL)  return 0;
        TreeNode* temp = new TreeNode(root->val);
        temp->right = check(root->left);
        temp->left = check(root->right);
        return temp;
        
    }
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* res = check(root);
        return res;
    }
};
