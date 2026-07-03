class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int low = 0,high = arr.size()-1;
        int res=-1;
        while(low<=high)
        {
            int mid = low + (high - low)/2;
            if(arr[mid] < target)
            {
                res = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return res+1;
    }
};
