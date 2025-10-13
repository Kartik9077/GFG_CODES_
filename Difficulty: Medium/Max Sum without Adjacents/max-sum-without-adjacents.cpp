// User function template for C++
class Solution {
  public:
  int f(int ind, vector<int> &arr, vector<int> &dp){
      if(ind==0) return arr[ind];
      if(ind<0) return 0;
      if(dp[ind]!=-1) return dp[ind];
      int pick= arr[ind] +f(ind-2,arr,dp);
      int notpick= 0+ f(ind-1,arr,dp);
      return dp[ind]= max(pick,notpick);
  }

    int findMaxSum(vector<int>& arr) {
       int n= arr.size();
       vector<int> dp(n,-1);
       return f(n-1,arr,dp);
        
    }
};