class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans(n,0);
        stack<int> s;
        int count=0;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && arr[i] >= arr[s.top()])
            {
                count = 1+ans[s.top()];
                ans[i] += count;
                s.pop();
            }
            s.push(i);
        }
        for(int i=0;i<n;i++)
        ans[i] +=1;
        
        return ans;
    }
};