class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
         // code here
        unordered_map<int, int> mp;
        int sum = 0;
        mp[0]++;
        int ans = 0;
        for (int n : arr){
            sum += n;
            if (mp.count(sum-k)) ans += mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};