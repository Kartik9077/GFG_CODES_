// User function Template for C++
class Solution {
  public:
    bool palindrome(string& s){
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[s.length()-i-1])return false;
        }
        return true;
    }
    int solve(string& s, int i,vector<int>&dp){
        if(i>=s.length())return 0;
        if(dp[i]!=-1)return dp[i];
        int mini = INT_MAX;
        
        for(int j=i;j<s.length();j++){
            string str = s.substr(i,j-i+1);
            if(palindrome(str)){
                int cut = 1 + solve(s,j+1,dp);
                mini = min(cut,mini);
            }
        }
        return dp[i] = mini;
    }
    int palPartition(string &s) {
        // code here
        vector<int> dp(s.length(),-1);
        return solve(s,0,dp)-1;
    }
};