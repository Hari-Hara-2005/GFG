// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
         int n = arr.size();
         int min = arr[0];
         int max = arr[0];
         for(int i=1;i<n;i++){
             if(max>arr[i])
             {
                 max = arr[i];
             }
             else if(min<arr[i]){
                 min = arr[i];
             }
         }
         return {max,min};
    }
};