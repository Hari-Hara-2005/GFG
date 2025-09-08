class Solution {
  public:
    bool areKAnagrams(string &s1, string &s2, int k) {
        // code here
        int n = s1.size();
        int m = s2.size();
        if(n!=m)return false;
        unordered_map<char,int>mp;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            mp[s1[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            mp[s2[i]]--;
        }
        for(auto it:mp)
        {
            if(it.second>=1)cnt+=it.second;
        }
        return cnt<=k;
    }
};