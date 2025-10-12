class Solution {
public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<bool>dp1(sum + 1, false);
        vector<bool>dp2(sum + 1, false);
        dp1[0] =true;
        dp2[0]=true;

        if (arr[0] <= sum) {
            dp1[arr[0]] = true;
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j <= sum; j++) {
                bool notTake = dp1[j];
                bool take = false;
                if (arr[i] <= j) {
                    take = dp1[j - arr[i]];
                }
                dp2[j] = take || notTake;
            }
            dp1=dp2;
        }

        return dp1[sum];
    }
};