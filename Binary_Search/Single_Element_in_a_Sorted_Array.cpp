class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();
        if (n == 1) return A[0];

        // edge cases
        if (A[0] != A[1]) return A[0];
        if (A[n-1] != A[n-2]) return A[n-1];

        int st = 1, end = n - 2;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (A[mid-1] != A[mid] && A[mid] != A[mid+1])
                return A[mid];

            if (mid % 2 == 0) { // even
                if (A[mid] == A[mid-1]) end = mid - 1;
                else st = mid + 1;
            } else { // odd
                if (A[mid] == A[mid-1]) st = mid + 1;
                else end = mid - 1;
            }
        }
        return -1;
    }
};
