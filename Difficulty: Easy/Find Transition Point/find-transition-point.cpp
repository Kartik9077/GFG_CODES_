class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
         int n =arr.size();
        int xrn =1;
        for(int i =0;i<n;i++){
            if(xrn^arr[i]==0) return i;
        }
        return -1;
    }
};