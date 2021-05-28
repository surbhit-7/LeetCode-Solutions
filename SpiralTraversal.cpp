// Difficulty :- Medium 
//Problem Statement 
/*
 Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Example 2:

Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]


*/
// Code :-
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> res;
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0 , left = 0 , right = n-1 , bottom = m -1;
        while(top<= bottom && left <= right)
        {
            for(int i = left ; i <= right ; i++)
            {
                res.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top ; i <= bottom ; i++)
                res.push_back(matrix[i][right]);
            right--;
            if(top<=bottom)
            {
                for(int i = right ; i>= left ;i--)
                    res.push_back(matrix[bottom][i]);
                bottom--;
            }
            if(left<=right)
            {
                for(int i = bottom ; i >= top ; i--)
                    res.push_back(matrix[i][left]);
                left++;
            }
        }
            return res;
    }
};
