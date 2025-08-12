// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
    vector<bool>res(256,false);
    int n = s.size();
    string ans = "";
    for(int i=0;i<n;i++)
    {
        int ch = s[i];
        if(!res[ch])
        {
            ans+=s[i];
            res[ch]=true;
        }
    }
    return ans;
    }
};