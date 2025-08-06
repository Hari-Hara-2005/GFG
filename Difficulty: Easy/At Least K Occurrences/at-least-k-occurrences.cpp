class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mp;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]] >= k)
            {
                return arr[i];
            }
        }
        return -1;
    }
};