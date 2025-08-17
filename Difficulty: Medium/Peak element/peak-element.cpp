class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i=1;i<n;i++)
        {
            if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1]))return i;
            else if(i==(n-1) && arr[i]>arr[i-1]) return i;
        }
        return 0;
    }
    
};