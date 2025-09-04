class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        int n = s.size();
        unordered_map<char,int>mp;
        string res="-1";
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]==2){
                res= s[i];
                return res;
            }
        }
        return res;
    }
};