class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        int n = s.size();
        int i=0;
        string res = "";
        while(i<n)
        {
            if(s[i]!=s[i+1])
            {
                res+=s[i];
            }
            i++;
        }
        return res;
    }
};