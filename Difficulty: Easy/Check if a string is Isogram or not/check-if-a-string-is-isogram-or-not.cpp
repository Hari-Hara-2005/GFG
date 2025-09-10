class Solution {
  public:
    bool isIsogram(string& s) {
        //  code here
        vector<int>ans(26,0);
        int n =s.size();
        for(int i=0;i<n;i++)
        {
            ans[s[i]-'a']++;
        }
        for(int i=0;i<n;i++)
        {
            if(ans[s[i]-'a']>=2)return false;
        }
        return true;
    }
};