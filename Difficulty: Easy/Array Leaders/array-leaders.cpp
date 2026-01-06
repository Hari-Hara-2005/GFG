

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n = arr.size();
        vector<int>ans;
        int num = arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>=num)
            {
                num = arr[i];
                ans.push_back(arr[i]);
            }
        }
        ans.push_back(arr[n-1]);
        sort(ans.begin(),ans.end(),greater<int>());
        return ans;
    }
};