class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        vector<int>ans;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int i=0,j=n-1;
        while(i<=j){
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