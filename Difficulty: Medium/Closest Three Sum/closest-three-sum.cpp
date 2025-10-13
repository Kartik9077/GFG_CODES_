// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int sum=0;
        int ans=0,maxi=1e9;
        for(int i=0;i<n-1;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
             sum=arr[i]+arr[j]+arr[k];
             if(sum==target) return sum;
             if(abs(sum-target)<maxi)
             {
                 ans=sum;
                 maxi=abs(sum-target);
             }
             if(abs(sum-target)==maxi)
             {
                 ans=max(ans,sum);
             }
            if(sum<target)
            {
                j++;
            }
            else
            {
                k--;
            }
                
            }
        }
        return ans;
    }
};
