// User code template

class Solution {
  public:
  int Ceil(vector<int>arr,int target){
      int n =arr.size();
      int low = 0;
      int high =n-1;
      int ans =-1;
      while(low<=high){
          int mid = low +(high - low);
          if(arr[mid]>=target)
          {
            ans = arr[mid];
            high = mid-1;
          }
          else{
              low = mid+1;
          }
      }
      return ans;
  }
    int Floor(vector<int>arr,int target){
      int n =arr.size();
      int low = 0;
      int high =n-1;
      int ans =-1;
      while(low<=high){
          int mid = low +(high - low);
          if(arr[mid]<=target)
          {
            low = mid+1;
            ans = arr[mid];;
          }
          else{
             high = mid-1;
          }
      }
      return ans;
  }
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int n =arr.size();
        vector<int>res;
        sort(arr.begin(),arr.end());
        int ans1 = Ceil(arr,x);
        int ans2 = Floor(arr,x);
        res.push_back(ans2);
        res.push_back(ans1);
        return res;
    }
};