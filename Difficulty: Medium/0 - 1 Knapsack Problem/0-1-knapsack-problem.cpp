class Solution {
    private:
int getKnapSack(int weight, vector<int>& val, vector<int> &wt, vector<vector<int>> &dp, int n){
    if(weight==0 or n==0){
        return 0;
    }
    if(dp[n][weight]!=-1){
        return dp[n][weight];
    }
    if(wt[n-1]<=weight){
        return dp[n][weight]=max(val[n-1] + getKnapSack(weight- wt[n-1], val, wt, dp, n-1), getKnapSack(weight, val, wt, dp, n-1));
    }
    if(wt[n-1]>weight)
    {
        return dp[n][weight]=getKnapSack(weight, val, wt, dp, n-1);
    }
    
    
    
    
}
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        
        vector<vector<int>> dp(val.size()+1, vector<int> (W+1,-1));
        int n= val.size();
        return getKnapSack(W, val, wt, dp, n);
    }
};