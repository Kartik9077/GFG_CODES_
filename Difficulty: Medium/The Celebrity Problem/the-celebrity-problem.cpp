class Solution {
public:
    int celebrity(vector<vector<int>>& mat) {
         int c = mat[0].size();
         unordered_map<int,int> mp;
         stack<int> st;
         int k = 0;
         for(int i = 0;i<c;i++){
         for(int j = 0;j<c;j++){
             if(mat[i][j] == 1){
                 mp[j]++;
                 if(mp[j] == c){
                     st.push(j);
                 }
             }
         }
         }
         if(st.empty()){
             return -1;
         }
         stack<int> s;
         while(!st.empty()){
              s.push(st.top());
              st.pop();
         }
         for(int i = 0;i<c;i++){
             int count = 0;
         for(int j = 0;j<c;j++){
              if(mat[i][j] == 0){
                  count++;
              }
         }
             if(i == s.top()){
              if(count == c-1){
                   return i;
              }
              if(count != c-1){
                  s.pop();
                  if(s.empty()){
                     return -1;
                  }
                  continue;
              }
             }
         }
         return -1;
   }
};