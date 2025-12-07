class Solution {
  public:
    int lowerBound(vector<int>& arr, int target){
        int low =0;
        int high=arr.size()-1;
        int ans =arr.size();
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(arr[mid]>=target)
            {
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    int upperBound(vector<int>& arr, int target){
        int low =0;
        int high=arr.size()-1;
        int ans =arr.size();
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(arr[mid]>target)
            {
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    int countFreq(vector<int>& arr, int target) {
        // code here
        int first = lowerBound(arr,target);
        int last = upperBound(arr,target);
        int cnt = last - first;
        if(first == arr.size() || arr[first] != target)return 0;
        return cnt;
    }
};
