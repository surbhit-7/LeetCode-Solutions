//DIFFICULTY :-Medium
//LINK :- https://leetcode.com/problems/deepest-leaves-sum/
/*
Problem Statement :-
1302. Deepest Leaves Sum

Given the root of a binary tree, return the sum of values of its deepest leaves.

 

Example 1:

Input: root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
Output: 15

Example 2:

Input: root = [6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]
Output: 19

*/
//CODE :-
#include <bits/stdc++.h>
class Solution {
public:
    int sum = 0 ;
    int getHeight(TreeNode *root)
    {
        if(root==NULL)  return 0;
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);
        
        return max(1 + lh,rh +1);
        
    }
    void getSum(TreeNode *root,int height)
    {
        if(root==NULL)  return ;
        if(height==1)   sum += root->val;
        getSum(root->left,height-1);
        getSum(root->right,height-1);
        
    }
    int deepestLeavesSum(TreeNode* root) {
        int height = getHeight(root);
        getSum(root,height);
        return sum;
    }
};
