class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int low=0;
        int high = n-1;
        int res = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid] == k){
                res = mid;
                high = mid -1;
            }
            else if(k>=arr[mid])
            {
                low = mid +1;
            }
            else{
                high = mid-1;
            }
        }
        return res == -1?-1:res;
    }
};

