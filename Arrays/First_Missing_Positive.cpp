// Problem: First Missing Positive (LeetCode 41)
// Approach: Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>    
using namespace std;


class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    sort(nums.begin(), nums.end());
        int positive=1;

        for(int i=0; i<nums.size();i++){
            if(nums[i]>0){
                if(nums[i]==positive){
                    positive++;
                }
                else if(nums[i] > positive){
                return positive;
                }
            }
        }
        return positive;
    }
};