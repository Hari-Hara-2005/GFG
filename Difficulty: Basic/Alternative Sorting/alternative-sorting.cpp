class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<int>ans;
        int j=n-1;
        int i=0;
       while(i<=j){
           if(i==j)
           {
               ans.push_back(arr[j--]);
           }
           else{
               ans.push_back(arr[j--]);
               ans.push_back(arr[i++]);
           }
       }
        return ans;
    }
};
