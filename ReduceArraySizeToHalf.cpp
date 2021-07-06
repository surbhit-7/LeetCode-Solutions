//DIFFICULTY :- Medium
//LINK :- https://leetcode.com/problems/reduce-array-size-to-the-half/
/*
Problem Statement :-
Given an array arr.  You can choose a set of integers and remove all the occurrences of these integers in the array.

Return the minimum size of the set so that at least half of the integers of the array are removed.

 

Example 1:

Input: arr = [3,3,3,3,5,5,5,2,2,7]
Output: 2
Explanation: Choosing {3,7} will make the new array [5,5,5,2,2] which has size 5 (i.e equal to half of the size of the old array).
Possible sets of size 2 are {3,5},{3,2},{5,2}.
Choosing set {2,7} is not possible as it will make the new array [3,3,3,3,5,5,5] which has size greater than half of the size of the old array.

Example 2:

Input: arr = [7,7,7,7,7,7]
Output: 1
Explanation: The only possible set you can choose is {7}. This will make the new array empty.

Example 3:

Input: arr = [1,9]
Output: 1

Example 4:

Input: arr = [1000,1000,3,7]
Output: 1

*/
//CODE :-
class Solution {
public:
        int minSetSize(vector<int>& arr) {    
        map<int,int> m;
        for(int i = 0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        
        vector<vector<int>> v;
        for(auto i: m){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end(),greater<vector<int>>());
        
        int ans = 0;
        int n = 0;
        
        for(int i = 0; i<v.size(); i++){
            if(n>=arr.size()/2) break;
            ans++;
            n+=v[i][0];
        }
        
        return ans;
        
    }
};
