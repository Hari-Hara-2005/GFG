// User function Template for C++

class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        int n=arr.size();
        int cnt=0,j=0;
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1] && arr[i]>0)
            {
                ans[j]=arr[i]*2;
                j++;
                arr[i+1]=0;
            }
            else if(arr[i]>0)
            {
                ans[j]=arr[i];
                j++;
            }
            else{
                cnt++;
            }
        }
        for(int i=j;i<n;i++){
            ans[i]=0;
        }
        return ans;
    }
};
