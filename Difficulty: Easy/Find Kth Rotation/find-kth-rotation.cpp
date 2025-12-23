class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int low=0,high = n-1;
        int mini = INT_MAX;
        int ans =-1;
        while(low<=high)
        {
            int mid = low +(high-low)/2;
            if(arr[low]<=arr[mid])
            {
                if(arr[low]<mini)
                {
                    ans = low;
                }
                mini = min(arr[low],mini);
                low = mid+1;
            }
            else{
                if(arr[mid]<mini)
                {
                    ans = mid;
                }
                mini = min(arr[mid],mini);
                high = mid-1;
            }
        }
        return ans;
    }
};
