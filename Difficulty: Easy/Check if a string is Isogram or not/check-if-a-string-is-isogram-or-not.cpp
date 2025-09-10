class Solution {
  public:
    bool isIsogram(string& s) {
        //  code here
        unordered_map<char,int>mp;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            if(mp[s[i]] >=2)return false;
        }
        return true;
    }
};