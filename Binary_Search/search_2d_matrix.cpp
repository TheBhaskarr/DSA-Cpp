/*
Problem: Search a 2D Matrix
Platform: LeetCode
Approach: Binary Search on Rows + Binary Search on Columns

Idea:
1. First perform binary search on rows to find the possible row where target may exist.
2. Once the row is found, perform binary search in that row.

Time Complexity: O(log m + log n)
Space Complexity: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool searchInRow(vector<vector<int>>& mat, int target, int row){ //O(logn)
        int n= mat[0].size();
        int st=0, end=n-1;

        while(st<= end) {
            int mid =st+(end-st)/2;
            if(target ==mat[row][mid]){
                return true;
            } else if(target>mat[row][mid]){
                st = mid +1;
            } else {
                end = mid -1;
            }
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {  //O(logm)
        int m=mat.size(), n = mat[0].size();

        int startRow =0, endRow=m-1;
        while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow)/2;

            if(target >= mat[midRow][0] && target <= mat[midRow][n-1]){
                return searchInRow(mat, target, midRow);
            } else if(target>= mat[midRow][n-1]) {
                //down => right
                startRow= midRow+1;
            } else {
                //up => left
                endRow =midRow-1;
            }
        }

        return false;
    }
};