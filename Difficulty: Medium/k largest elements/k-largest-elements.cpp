class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        vector<int>ans;
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        for(int i =0;i<k;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};