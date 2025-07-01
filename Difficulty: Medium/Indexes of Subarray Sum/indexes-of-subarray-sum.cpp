class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int sum=0,start=0,end=0;
        while(end<arr.size()){
            sum+=arr[end];
            end++;
            while(start<end&&sum>target){
                sum-=arr[start];
                start++;
            }
            if(sum==target)return{start+1,end};
        }
        return {-1};
    }
};