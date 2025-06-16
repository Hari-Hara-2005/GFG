class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>ans1(n);
        vector<int>ans2(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            ans1[i]=sum;
        }
        sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=arr[i];
            ans2[i]=sum;
        }
        for(int i=0;i<n;i++)
        {
            if(ans1[i]==ans2[i])
            {
                return i;
            }
        }
        return -1;
    }
};