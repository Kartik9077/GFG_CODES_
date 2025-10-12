class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        for(int i=0;i<arr.size()-1;i+=2)
        {
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
    }
};

