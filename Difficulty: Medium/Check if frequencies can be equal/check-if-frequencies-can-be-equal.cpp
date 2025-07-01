class Solution {
  public:
    bool isSame(vector<int>freq,int sz)
    {
        int cnt=0;
        for(int i=0;i<sz;i++)
        {
            if(freq[i]>0)
            {
                cnt=freq[i];
                break;
            }
        }
        for(int j=0;j<sz;j++)
        {
            if(freq[j]>0 && freq[j]!=cnt)
            {
                return false;
            }
        }
        return true;
    }
    bool sameFreq(string& s) {
        // code here
        int n=s.size();
        vector<int>ans(26,0);
        for(int i=0;i<n;i++)
        {
            ans[s[i]-'a']++;
        }
        if(isSame(ans,26))return true;
        for(int j=0;j<26;j++)
        {
            if(ans[j]>0)
            {
                ans[j]--;
                if(isSame(ans,26))return true;
                ans[j]++;
            }
        }
        return false;
    }
};