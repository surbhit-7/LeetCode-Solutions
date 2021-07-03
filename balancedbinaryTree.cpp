//DIFFICULTY :- Easy
//LINK :- https://leetcode.com/problems/balanced-binary-tree/
/*
Problem Statement :-
Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

    a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

 

Example 1:

Input: root = [3,9,20,null,null,15,7]
Output: true

Example 2:

Input: root = [1,2,2,3,3,null,null,4,4]
Output: false

Example 3:

Input: root = []
Output: true

*/
//CODE :-
class Solution {
public:
    int check(TreeNode *root,bool &ans)
    {
        if(root==NULL)  return 0;
        int lh = check(root->left,ans);
        int rh = check(root->right,ans);
        if(abs(lh-rh)>1) ans = false;
        return max(1+lh,1+rh);
    }
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        int a = check(root,ans);
        if(ans)
            return true;
        else return false;
    }
};
