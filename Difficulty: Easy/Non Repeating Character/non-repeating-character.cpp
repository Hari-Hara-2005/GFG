
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        map<char,int>mp;
        char ch;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[s[i]] == 1)
            {
                return s[i]; 
            }
        }
        return '$';
    }
};