class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        int n = arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int el = n/3;
        vector<int>ans;
        for(auto it:mp)
        {
            if(it.second > el)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};