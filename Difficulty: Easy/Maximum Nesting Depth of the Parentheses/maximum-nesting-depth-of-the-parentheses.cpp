class Solution {
  public:
    int maxDepth(string s) {
        // code here
        int cnt=0;
        int maxi = INT_MIN;
        for(auto it:s)
        {
            if(it == '(')cnt++;
            else if(it == ')')cnt--;
            maxi = max(cnt,maxi);
        }
        return maxi;
    }
};