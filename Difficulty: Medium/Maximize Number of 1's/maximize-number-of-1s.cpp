class Solution {
  public:
    int maxOnes(vector<int>& nums, int k) {
        // code here
        int i=0,j=0,maxii=0,count_k=0;
        while(j<nums.size()){
            if(nums[j]==1){j++;}
            else if(nums[j]==0){j++;count_k++;}
             while(i<=j&&count_k>k){
                    if(nums[i]==0)count_k--;
                    i++;
             }
             maxii=max(maxii,j-i);
        }
        maxii=max(maxii,j-i);
        return maxii;
    }
};
