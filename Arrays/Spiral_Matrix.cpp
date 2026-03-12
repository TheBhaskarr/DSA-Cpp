/*
Problem: Spiral Matrix
Platform: LeetCode
Difficulty: Medium
Approach: Matrix Boundary Traversal

Idea:
1. Maintain four boundaries: top, bottom, left, right.
2. Traverse the matrix in four directions:
   - left → right
   - top → bottom
   - right → left
   - bottom → top
3. Shrink the boundaries after each traversal.

Time Complexity: O(m * n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size(), n = mat[0].size();
        int strow=0, stcol=0, edrow=m-1, edcol=n-1;
        vector<int> ans;


        while(strow<= edrow && stcol<=edcol) {
            //top
            for(int j=stcol; j<=edcol; j++) {
                ans.push_back(mat[strow][j]);
            }
            //right
            for(int i=strow+1; i<=edrow; i++) {
                ans.push_back(mat[i][edcol]);
            }
            //bottom 
            for(int j=edcol-1; j>=stcol; j--) {
                if(strow==edrow){
                    break;
                }
                ans.push_back(mat[edrow][j]);
            }
            //left
            for(int i=edrow-1; i>=strow+1; i--){
                if(stcol==edcol){
                    break;
                }
                ans.push_back(mat[i][stcol]);
            }

            strow++;
            edrow--;
            stcol++;
            edcol--;
        }

        return ans;
    }
};