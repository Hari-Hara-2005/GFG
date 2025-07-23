// User function template for C++
class Solution {
  public:

    int isPanagram(string s) {
        // Your code goes here
        vector<int>ans(26,0);
        int n= s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                ans[s[i]-'a']++;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                ans[s[i]-'A']++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(ans[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};