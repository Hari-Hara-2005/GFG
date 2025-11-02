class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi = arr[0];
        int smaxi = -1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>maxi)
            {
                smaxi=maxi;
                maxi =arr[i];
            }
            else if(arr[i]<maxi && arr[i]>smaxi)
            {
                smaxi = arr[i];
            }
        }
        return smaxi;
    }
};