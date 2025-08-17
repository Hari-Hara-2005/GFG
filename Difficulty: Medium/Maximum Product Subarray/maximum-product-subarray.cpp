class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n =arr.size();
        int curMax = arr[0];
        int curMin = arr[0];
        int ans =arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]<0)swap(curMax,curMin);
            curMax = max(arr[i],arr[i]*curMax);
            curMin = min(arr[i],arr[i]*curMin);
            ans = max(ans,curMax);
        }
        return ans;
    }
};