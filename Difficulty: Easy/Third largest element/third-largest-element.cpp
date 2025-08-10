class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i=n-1;i>=0;i--)
        {
            if(n-3 == i)
            {
                return arr[i];
            }
        }
        return -1;
    }
};