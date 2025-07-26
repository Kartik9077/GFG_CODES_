class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(auto it:arr)mpp[it]++;
        for(auto& it:mpp){
            if(it.second>arr.size()/3)ans.push_back(it.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};