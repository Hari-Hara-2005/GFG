class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]++;
        }
        for(int i=0;i<b.size();i++)
        {
            mp[b[i]]++;
        }
        for(auto it:mp)
        {
            ans.push_back(it.first);
        }
        return ans;
    }
};