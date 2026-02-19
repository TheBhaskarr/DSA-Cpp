// problem: reverse string (LeetCode 344)
// approach: two pointer
// time complexity: O(n)
// Space complexity: O(1)
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {

        int start = 0;
        int end = s.size() - 1;

        while (start < end) {

            swap(s[start], s[end]);

            start++;
            end--;
        }
    }
};