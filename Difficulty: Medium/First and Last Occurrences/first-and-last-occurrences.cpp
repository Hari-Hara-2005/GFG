class Solution {
  public:
//   int lower_bound(vector<int>arr,int x){
//       int low = 0;
//       int
//   }
//   int upper_bound(vector<int>arr,int x){
      
//   }
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int first=-1;
        int last=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==x)
            {
                if(first==-1)first=i;
                last = i;
            }
        }
        return {first,last};
    }
};