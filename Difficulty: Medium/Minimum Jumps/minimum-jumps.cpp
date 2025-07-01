class Solution {
  public:
  
    int solve(vector<int>&arr,int idx,vector<int>&dp){
        if(idx>=arr.size()-1)return 0;
        if(arr[idx]==0)return 1e9;
        if(dp[idx]!=-1)return dp[idx];
        int curr_step=INT_MAX;
        for(int i=1;i<=arr[idx];i++)
        {
            int dis=1+solve(arr,i+idx,dp);
            curr_step=min(curr_step,dis);
        }
        return dp[idx]=curr_step;
        
    }
  
    int minJumps(vector<int>& arr) {
        // code here
        vector<int>dp(10001,-1);
        if(arr[0]==0)return -1;
        int ans=solve(arr,0,dp);
        return ans>1e9?-1:ans;
    }
};
