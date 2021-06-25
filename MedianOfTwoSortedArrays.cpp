//Difficulty - hard
//Problem Statement - 
/*

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

Example 3:

Input: nums1 = [0,0], nums2 = [0,0]
Output: 0.00000

Example 4:

Input: nums1 = [], nums2 = [1]
Output: 1.00000

Example 5:

Input: nums1 = [2], nums2 = []
Output: 2.00000
*/
//Code :-
class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        int n = num1.size() + num2.size();
        long long arr[n];
        int ptr1 = 0 , ptr2 = 0;
        int i = 0 ;
        while(ptr1<num1.size()&&ptr2<num2.size()){
            if(num1[ptr1] <= num2[ptr2])
                arr[i++] = num1[ptr1++];
            else
                arr[i++] = num2[ptr2++];
        }
        while(ptr1<num1.size())
            arr[i++] = num1[ptr1++];
        while(ptr2<num2.size())
            arr[i++] = num2[ptr2++];
        if(n==1)
            return double(arr[0]);
        if(n%2==0){
            double med = double(arr[n/2] + arr[n/2 - 1]);
            return med/2;
        }else
        {
            double med = arr[n/2 ];
            return med;
        }
            
    }
};
// My time complexity is O(m+n) which is higher then the requires tc but my code was accepted !
