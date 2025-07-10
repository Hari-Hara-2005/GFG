class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        vector<char>ans;
        int n=s.size();
        string res="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                ans.push_back(s[i]);
            }
            else if(!ans.empty())
            {
                while(!ans.empty()){
                    res+=ans.back();
                    ans.pop_back();
                }
                res+=" ";
            }
        }
        if(!ans.empty())
        {
            while(!ans.empty())
            {
                res+=ans.back();
                ans.pop_back();
            }
        }
        if(!res.empty() && res.back()==' ')
        {
            res.pop_back();
        }
        return res;
    }
};