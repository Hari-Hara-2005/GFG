class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
       int n = arr.size();
       int idx1 = -1;
       int idx2 = -1;
       int ans = INT_MAX;
       for(int i=0;i<n;i++){
           if(arr[i] == x)
           {
               idx1=i;
           }
           else if(arr[i] == y)
           {
               idx2=i;
           }
           if(idx1!=-1 && idx2!=-1)
           {
               ans = min(ans,abs(idx2-idx1));
           }
       }
       return ans==INT_MAX ? -1:ans;
    }
};