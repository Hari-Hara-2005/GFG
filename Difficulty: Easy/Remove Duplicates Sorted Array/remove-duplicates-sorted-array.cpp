class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=arr[i+1])
            {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};