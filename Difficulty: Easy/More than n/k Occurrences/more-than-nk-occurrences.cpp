class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        int n = arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int cnt=0;
        for(auto it:mp)
        {
            if(it.second>(n/k))
            {
                cnt++;
            }
        }
        return cnt;
    }
};