//Difficulty - Medium 
// Problem Statement :- 
/*
Given an array, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

*/
Code :- class Solution {
public:
    void reverseArray(vector <int>&arr, int low , int high)
    {
        while(low<high)
        {
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& arr, int k) {
        int s = arr.size() ;
        if(s==1||s==0)
            return;
        k%=s;
        reverseArray(arr, 0, s-1);
        reverseArray(arr, 0, k-1);
        reverseArray(arr, k, s-1);
    }
};
