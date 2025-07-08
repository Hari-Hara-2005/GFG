// User function template for C++

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int rem = arr[i]/k;
            if(arr[i]%k!=0)
            {
                ans+=rem+1;
            }
            else{
                ans+=rem;
            }
        }
        return ans;
    }
};