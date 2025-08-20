class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int>mys;
        vector<int>ans;
        for(int i=0;i<a.size();i++)
        {
            mys.insert(a[i]);
        }
        for(int j=0;j<b.size();j++)
        {
            mys.insert(b[j]);
        }
        for(auto x:mys)
        {
            ans.push_back(x);
        }
        return ans;
    }
};