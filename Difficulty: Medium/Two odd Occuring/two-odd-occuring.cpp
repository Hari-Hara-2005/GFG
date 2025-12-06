class Solution {
  public:
    vector<int> twoOddNum(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto it:arr)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
            if(it.second%2 == 1)ans.push_back(it.first);
        }
        sort(ans.begin(),ans.end(),greater<int>());
        return ans;
    }
};