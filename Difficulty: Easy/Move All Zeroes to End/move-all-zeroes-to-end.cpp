class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n =arr.size();
        vector<int>res;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                cnt++;
            }
            else{
                res.push_back(arr[i]);
            }
        }
        for(int i=0;i<cnt;i++)
        {
            res.push_back(0);
        }
        arr=res;
    }
};