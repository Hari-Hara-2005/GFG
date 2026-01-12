class Solution {
  public:
    long long findMaxSubarraySum(vector<int>& arr, long long x) {
        // Your code goes here
        int n = arr.size();
        int sum=0,maxi = 0;
        for(int i=0;i<n;i++)
        {
            sum =0;
            for(int j=i;j<n;j++)
            {
                sum+=arr[j];
                if(sum <= x){
                maxi = max(maxi,sum);
                }
                else{
                break;
            }
            }
        }
        return maxi;
    }
};
