class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        vector<int>ans;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto num:mp)
        {
            if(num.second>1)
            {
                ans.push_back(num.first);
            }
        }
        return ans;
    }
};