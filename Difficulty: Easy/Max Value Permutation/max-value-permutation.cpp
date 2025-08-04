class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // Complete the function
        int n =arr.size();
        long long sum=0;
        sort(arr.begin(),arr.end());
        for(long long  i=0;i<n;i++)
        {
            sum+=arr[i]*i;
        }
        return sum % 1000000007;
    }
};