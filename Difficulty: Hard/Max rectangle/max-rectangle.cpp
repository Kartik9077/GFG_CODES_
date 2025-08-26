class Solution {
  public:
  int maxArea(vector<vector<int>> &mat) {
        int n = mat.size(), m = mat[0].size();
        int ans = 0;
        int width=0, area=0;
        
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++){
                if(mat[i][j] > 0){
                    //set width
                    if(j!=0) 
                        mat[i][j] = 1 + mat[i][j-1];  
                        
                    width = mat[i][j];
                    
                    //traverse row-wise
                    //min width and max area
                    for(int k=i; k>=0; k--){
                        width = min(width, mat[k][j]);
                        area = width * (i-k+1);
                        
                        ans = max(ans, area);
                    }
                }
            }
        return ans;
    }
};