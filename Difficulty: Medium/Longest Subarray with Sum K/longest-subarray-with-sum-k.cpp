class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mpp;
        mpp[0]=-1;
        int su=0,ans=0;
        for(int i=0;i<arr.size();i++){
            su+=arr[i];
            if(mpp.find(su-k)!=mpp.end()){
               ans=max(ans,i-mpp[su-k]);
            }
            if(!mpp.count(su))mpp[su]=i;
        }
        return ans;
        
    }
};