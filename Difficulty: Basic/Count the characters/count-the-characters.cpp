
class Solution {
  public:
    int getCount(string s, int N) {
        // code here.
        int n=s.size();
        int cnt=0;
        char prev=0;
        vector<int>ans(26,0);
        for(int i=0;i<n;i++)
        {
            if(prev!=s[i])
            {
            ans[s[i]-'a']++;
            prev=s[i];
            }
        }
        for(int i=0;i<26;i++)
        {
            if(ans[i]==N)
            {
                cnt++;
            }
        }
        return cnt;
    }
};