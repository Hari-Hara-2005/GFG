class Solution {
  public:

    bool kPangram(string s, int k) {
        // code here
      vector<int>ans(26,0);
      int n=s.size();
      int total=0;
      if(n<26)return false;
      for(int i=0;i<n;i++)
      {
          if(s[i]>='a' && s[i]<='z'){
            int ch=s[i]-'a';
            ans[ch]++;
            total++;
          }
          if(s[i]>='A' && s[i]<='Z'){
            int ch=s[i]-'A';
            ans[ch]++;
            total++;
          }
      }
      if(total<26)return false;
      int cnt=0;
      for(int i=0;i<26;i++)
      {
          if(ans[i]==0)
          {
              cnt++;
          }
      }
      return cnt<=k;
    }
};