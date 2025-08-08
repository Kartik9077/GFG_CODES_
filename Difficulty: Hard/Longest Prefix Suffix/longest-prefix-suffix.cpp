
// User function template for C++ddbbbbcddd

class Solution {
  public:
    int getLPSLength(string str) {
        // Your code goes here
        int s=str.size();
        vector<int>ans(s,0);
        int start=0;
        int end=1;
        while(end<s)
        {
            if(str[end]==str[start]){
                ans[end]=start+1;
                end++;
                start++;
            }
           else
            {
               if(start==0)
               {
                   ans[end]==0;
                   end++;
               }
               else
               {
                   start=ans[start-1];
               }
                }
               
            }
        
        return ans[s-1];
        
        
    }
};
