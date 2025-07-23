class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
     int sum=0,curr=0;
     for(int i=0;i<arr.size();i++){
             curr+=arr[i];
              sum+=curr;
        
     }
     vector<int>dp(arr.size(),0);
     dp[0]=sum;
     for(int i=1;i<arr.size();i++){
         dp[i]=dp[i-1]-(arr.size()-i+1)*arr[i-1];
     }
     sum=0;
     for(auto it:dp)sum+=it;
     
     return sum;
    
    }
};