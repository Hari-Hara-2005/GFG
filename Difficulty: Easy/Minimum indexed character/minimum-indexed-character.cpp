class Solution {
  public:
    int minIndexChar(string &s1, string &s2) {
        //  code here
        int n = s1.size();
        int m = s2.size();
        unordered_map<char,int>mp;
        for(int i=0;i<m;i++)
        {
            mp[s2[i]]=i;
        }
        for(int j=0;j<n;j++)
        {
            if(mp.find(s1[j])!=mp.end())
            {
                return j;
            }
        }
        return -1;
    }
};