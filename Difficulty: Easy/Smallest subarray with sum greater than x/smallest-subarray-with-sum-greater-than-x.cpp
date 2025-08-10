class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int mini = INT_MAX;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            int ans=arr[i];
            if(ans>x)return 1;
            for(int j=i+1;j<n;j++)
            {
                ans+=arr[j];
                if(ans > x){
                    mini =min(mini,(j-i+1));
                }
            }
        }
        return mini > n?0:mini;
    }
};