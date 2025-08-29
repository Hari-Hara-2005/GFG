// User function template for C++

class Solution {
  public:
    string removeUtil(string &s) {
        // code here
        int n = s.size();
        int i=0;
        string res = "";
        while(i<n)
        {
            if(i+1 < n && s[i] == s[i+1])
            {
                i++;
                while(i<n && s[i] == s[i-1])
                {
                    i++;
                }
            }
            else{
                res+=s[i];
                i++;
            }
        }
        if(n==res.size())return res;
        else return removeUtil(res);
    }
};