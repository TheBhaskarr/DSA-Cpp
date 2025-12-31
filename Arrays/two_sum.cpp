// Problem: Two Sum
// Platform: LeetCode
// Difficulty: Easy
// Approach:
// Use a map to store numbers and their indices.
// For each element nums[i], check if (target - nums[i]) already exists in the map.
// If yes, return the stored index and current index.
//
// Time Complexity: O(n log n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int a = nums[i];
            int more = target - a;

            if (mpp.find(more) != mpp.end()) {
                return {mpp[more], i};
            }

            mpp[a] = i;
        }
        return {-1, -1};
    }
};
