class Solution {
  public:
    int tabulation(int n,int m,string &s1,string &s2){
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int maxi=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=0;
                maxi=max(maxi,dp[i][j]);
            }
        }
        return maxi;
    }
    int longestCommonSubstr(string& s1, string& s2) {
        return tabulation(s1.size(),s2.size(),s1,s2);
    }
};

