class Solution {
   public:
    
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int> ls;
        map<int,int> mpp;
        
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        for(int i=1;i<=arr.size();i++){
            ls.push_back(mpp[i]);
        }
        return ls;
    }
};