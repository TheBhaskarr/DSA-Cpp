/*
Problem: Find the Duplicate Number
Platform: LeetCode
Difficulty: Medium
Approach: Floyd’s Cycle Detection (Tortoise and Hare)

Idea:
1. Treat the array as a linked list where each value points to the next index.
2. Use two pointers:
   - slow moves one step
   - fast moves two steps
3. When they meet, a cycle exists.
4. Move slow back to the start and move both one step at a time.
5. The meeting point is the duplicate number.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int slow = arr[0], fast = arr[0];

        do{
            slow = arr[slow];
            fast = arr[arr[fast]];
        }while(slow != fast);

        slow = arr[0];
        while(slow != fast){
            slow = arr[slow];
            fast = arr[fast];
        }

        return slow;
    }
};