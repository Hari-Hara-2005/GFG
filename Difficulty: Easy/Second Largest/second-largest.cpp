class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi = -1;
        int secMaxi = -1;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]>maxi)
            {
                secMaxi = maxi;
                maxi = arr[i];
            }
            if(arr[i]>secMaxi && arr[i]<maxi)
            {
                secMaxi = arr[i];
            }
        }
        return secMaxi;
    }
};