class Solution {
public:
    int peakElement(std::vector<int> &arr) {
        int n = arr.size();
        if (n == 0) return -1;
        if (n == 1) return 0;

        if (arr[0] >= arr[1]) return 0;

        for (int i = 1; i < n - 1; ++i) {
            if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) {
                return i;
            }
        }

        // If none in the middle, last must be a peak
        return n - 1;
    }
};