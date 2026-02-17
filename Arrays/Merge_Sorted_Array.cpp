// problem: merge sorted array (LeetCode 88)
// approach: two pointer (from end)
// Time Complexity: O(m + n)
// Space Complexity: O(1)

class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {

        int idx = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        while (i >= 0 && j >= 0) {

            if (A[i] >= B[j]) {
                A[idx] = A[i];
                i--;
            }
            else {
                A[idx] = B[j];
                j--;
            }

            idx--;
        }

        // copy remaining elements from B
        while (j >= 0) {
            A[idx] = B[j];
            j--;
            idx--;
        }
    }
};