class Solution {
  public:
    vector<int> asciirange(string& s) {
        // code here
        int n=s.size();
        vector<int>res;
    unordered_map<int,vector<int>>mpp;
    for(int i=0;i<n;i++){
        mpp[s[i]].push_back(i);
    }
    for(auto&[a,b]:mpp){
        if(b.size()<2)continue;
        else {
            sort(b.begin(),b.end());
            int f=b[0],l=b[b.size()-1];
            int sum=0;
            for(int i=f+1;i<l;i++){
                char c=s[i];
                sum+=c;

            }
           
            if(sum!=0)res.push_back(sum);
            
        }
    }
    return res;
        
    }
};