class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int large = INT_MIN;
        int seclarge = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i] > large)
            {
                seclarge = large;
                large = arr[i];
            }
            else if(arr[i]>seclarge && arr[i] < large)
            {
                seclarge = arr[i];
            }
        }
        return seclarge;
    }
};