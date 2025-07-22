class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int j=1,i=0;
      sort(arr.begin(),arr.end());
      while(i<arr.size()){
          if(arr[i]<=0){
              i++;continue;
              
          }
          else if(j==arr[i]){
              while(arr[i]==j)i++;
              
              j+=1;
          }
          else return j;
          
      }
      return j;
    }
};