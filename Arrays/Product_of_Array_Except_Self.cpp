/*
LeetCode: Product of Array Except Self
-------------------------------------
Problem:
Given an integer array nums, return an array answer such that
answer[i] is equal to the product of all the elements of nums except nums[i].

Constraints:
- Do not use division
- Time Complexity: O(n)
- Space Complexity: O(1) (excluding output array)

Approach:
1. Use prefix products to store product of elements before index i
2. Use suffix product variable to multiply elements after index i
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // Prefix product
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        // Suffix product
        int suffix = 1;
        for (int i = n - 2; i >= 0; i--) {
            suffix *= nums[i + 1];
            ans[i] *= suffix;
        }

        return ans;
    }
};
