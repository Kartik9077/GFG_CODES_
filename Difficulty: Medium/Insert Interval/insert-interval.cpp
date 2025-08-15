// User function Template for C++

class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &inter,
                                       vector<int> &newi) {
        // code here
        vector<vector<int>>ans;
        vector<int>temp(2,0);
        int i=0;
            while(i<inter.size()&&inter[i][1]<newi[0]){
                temp[0]=inter[i][0];temp[1]=inter[i][1];
                ans.push_back(temp);
                i++;
            }
            if(i==inter.size())
            {
              temp[0]=newi[0];temp[1]=newi[1];
              ans.push_back(temp);
              return ans;
            }
                int start_time=min(newi[0],inter[i][0]);
                int end_time=newi[1];
                while(i<inter.size()&&inter[i][0]<=end_time){
                    end_time=max(end_time,inter[i][1]);
                    i++;
                }
                temp[0]=start_time;temp[1]=end_time;
                ans.push_back(temp);
                
        while(i<inter.size()){
            temp[0]=inter[i][0];temp[1]=inter[i][1];
            ans.push_back(temp);
            i++;
        }
        return ans;
       
        
        
    }
};