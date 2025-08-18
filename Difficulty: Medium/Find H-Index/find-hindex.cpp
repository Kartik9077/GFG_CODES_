class Solution {
  public:
    bool check(int n,vector<int>&nums){
        int count=0;
        for(auto it:nums){
            if(it>=n)count++;
        }
        return count>=n;
    }
    int hIndex(vector<int>& c) {
        // code here
        int low=0,h=*max_element(c.begin(),c.end());
        int ans=0;
        while(low<=h){
            int mid=low+(h-low)/2;
            if(check(mid,c)){
                ans=mid;
                low=mid+1;
            }
            else h=mid-1;
            
        }
        return ans;
    }
};