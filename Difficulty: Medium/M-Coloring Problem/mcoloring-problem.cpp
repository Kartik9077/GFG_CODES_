class Solution {
  public:
     bool dfs(int v,unordered_map<int,vector<int>>&mpp,vector<int>color,int m,int node){
        for(int i=0;i<m;i++){
            int already=1;
            for(auto it:mpp[node]){
                if(color[it]==i){
                   already=0;
                    break;
                }
            }
            if(already==0)continue;
            color[node]=i;
            int ispos=0;
        
        for(auto it:mpp[node]){
            if(color[it]==-1){
                if(!dfs(v,mpp,color,m,it)){
                    ispos=1;
                    break;
                }
            }
        }
        if(ispos==0)return 1;
       color[node]=-1;
          
        }
        return 0;
     }
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<edges.size();i++){
            mpp[edges[i][0]].push_back(edges[i][1]);
            mpp[edges[i][1]].push_back(edges[i][0]);
            
        }
        // code her
        vector<int>color(v,-1);
        for(int i=0;i<v;i++){
            if(color[i]==-1&&!dfs(v,mpp,color,m,i))return 0;
        }
        return 1;
    
    }
};