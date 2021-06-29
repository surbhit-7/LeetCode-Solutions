//DIFFICULTY :- Easy
//LINK :- https://leetcode.com/problems/contains-duplicate/
/*
Problem Statement :-
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true

Example 2:

Input: nums = [1,2,3,4]
Output: false

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

*/
//CODE :-
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        bool  flag = false;
        for(int i =0 ; i < nums.size() ; i++)
        {
            mp[nums[i]] ++;
        }
        for(auto x : mp)
        {
            if(x.second >= 2)
            {
                flag = true;
                break;
            }
        }
        if(flag)
            return true;
        else
            return false;
    }
};
