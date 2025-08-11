// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
       int n = s.size();
       string res="";
       vector<bool>ans(26,false);
       for(int i=0;i<n;i++)
       {
         if(!ans[s[i]-'a'])
         {
             res+=s[i];
             ans[s[i]-'a'] = true;
         }
       }
       return res;
    }
};