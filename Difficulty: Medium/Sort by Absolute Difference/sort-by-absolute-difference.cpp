class Solution {
  public:
    void rearrange(vector<int> &num, int x) {
        // code here
        map<int,vector<int>>mpp;
        for(auto it:num){
           mpp[abs(x-it)].push_back(it);
        }
        
        num.clear();
        for(auto&[a,b]:mpp){
            for(auto it:b){
                num.push_back(it);
            }
        }
        return ;
    }
};