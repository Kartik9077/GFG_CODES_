class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int leftMax = arr[0];
        vector<int> suff(n);
        suff[n-1] = arr[n-1];
        
        for (int i = n-2; i >= 0; i--) {
            suff[i] = max(suff[i+1], arr[i]);
        }
        
        int total = 0;
        for (int i = 0; i < n; i++) {
            leftMax = max(leftMax, arr[i]);
            int rightMax = suff[i];
            
            if (arr[i] < leftMax && arr[i] < rightMax)
                total += min(leftMax, rightMax) - arr[i];
        }
        return total;
    }
};