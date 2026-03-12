/*
Problem: Search a 2D Matrix II
Platform: LeetCode
Approach: Staircase Search (Top Right Traversal)

Idea:
1. Start from the top-right corner of the matrix.
2. If the current element equals the target, return true.
3. If the target is smaller than the current element, move left.
4. If the target is greater than the current element, move down.
5. Continue until the target is found or the indices go out of bounds.

Time Complexity: O(m + n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(), n=mat[0].size();

        int r=0, c=n-1;
        while(r<m && c>=0) {
            if(target == mat[r][c]){
                return true;
            } else if (target < mat[r][c]){
                c--;
            } else {
                r++;
            }
        }
        return false;
    }
};