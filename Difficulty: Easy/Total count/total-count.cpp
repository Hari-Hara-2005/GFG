// User function template for C++

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int n = arr.size();
        int res = 0;
        for(int i=0;i<n;i++)
        {
            int num = arr[i]/k;
            if(arr[i]%k!=0)
            {
                res+=num+1;
            }
            else{
                res+=num;
            }
        }
        return res;
    }
};