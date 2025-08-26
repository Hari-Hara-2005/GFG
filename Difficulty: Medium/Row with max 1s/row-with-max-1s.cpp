// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n = arr.size();
        int maxi =INT_MIN;
        int res = 0;
        for(int i=0;i<n;i++)
        {
            int cnt = 0;
            for(int j=0;j<arr[i].size();j++)
            {
                if(arr[i][j]==1)cnt++;
            }
            if(cnt>maxi)res=i;
            maxi = max(maxi,cnt);
        }
        return (maxi == 0)?-1:res;
    }
};