

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
   int n=arr.size();
   int maxi=0;
   vector<int>ans;
   for(int i=n-1;i>=0;i--)
   {
       if(arr[i]>=maxi)
       {
           ans.push_back(arr[i]);
       }
       maxi=max(maxi,arr[i]);
   }
   sort(ans.begin(),ans.end(),greater<int>());
   return ans;
    }
};