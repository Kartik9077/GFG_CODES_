class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        
        
        int ans = -1;
        
        int first = -1;
        int last = -1;
        
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] == x)
            {
                last = i;
            }
        }
        
        
        for(int i=arr.size()-1; i>=0; i--)
        {
            if(arr[i] == x)
            {
                first = i;
            }
        }
        
        vector<int> v;
        if(first!=-1 && last != -1)
        {
            
            v.push_back(first);
            v.push_back(last);
            
        }
        else{
            
            v.push_back(ans);
            v.push_back(ans);
            
        }
        return v;
    }
};