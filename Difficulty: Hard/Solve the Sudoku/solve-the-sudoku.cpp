class Solution {
  public:
  
    bool issafe(int row,int col,vector<vector<int>> &mat,int val){
        for(int i=0;i<9;i++){
            if(mat[row][i]==val)return false;
            if(mat[i][col]==val)return false;
            if(mat[3*(row/3)+i/3][3*(col/3)+i%3]==val)return false;
        }
        return true;
    }
bool solve(vector<vector<int>> &mat){
int n=mat.size();
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(mat[i][j]==0){
            for(int val=1;val<=9;val++){
        if(issafe(i,j,mat,val)){
            mat[i][j]=val;
            bool aagekasolution=solve(mat);
            if(aagekasolution){
                return true;
            }else{
            mat[i][j]=0;
        }
        }
    }
    return false;
}
}
}
return true;
}
    // Function to find a solved Sudoku.
    void solveSudoku(vector<vector<int>> &mat) {
        // code here
        solve(mat);
    }
};