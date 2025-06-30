class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        int j=n-1;
        sort(arr.begin(),arr.end());
        vector<int>ans;
        for(int i=0;i<=j;)
        {
            if(i==j)
            {
                ans.push_back(arr[j--]);
            }
            else{
                ans.push_back(arr[j--]);
                ans.push_back(arr[i++]);
            }
        }
        arr=ans;
    }
};