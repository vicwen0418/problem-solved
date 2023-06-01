// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // binary search
        int left = 1, right = n, mid;
        while (left <= right) {
            mid = left + (right - left) / 2;

            if (!isBadVersion(mid)) left = mid + 1;
            else {
                right = mid - 1;
            }
        }

        return left;
    }
};