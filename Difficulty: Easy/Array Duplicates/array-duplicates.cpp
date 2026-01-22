class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        vector<int>res;
        for(auto it:mp)
        {
            if(it.second>=2)res.push_back(it.first);
        }
        return res;
    }
};