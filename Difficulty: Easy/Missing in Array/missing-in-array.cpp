class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // cod int n=arr.size();
        sort(arr.begin(),arr.end());
        int i=1;
        for(auto it:arr)
        {
            if(it==i)i++;
            else
            {
                return i;
            }
        }
        return i;
        
    }
};