class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,prices[i]);
            maxi=max(maxi,prices[i]-mini);
        }
        return maxi;
    }
};
