class Solution {
 public:
    string reverseWords(string &s) {
        // code here
        int n = s.size();
        string res="";
        string word="";
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!='.')
            {
                word+=s[i];
            }
            else if(!word.empty())
            {
                reverse(word.begin(),word.end());
                res+=word+".";
                word="";
            }
        }
        if(!word.empty()){
            reverse(word.begin(),word.end());
            res+=word;
            word="";
        }
        if(!res.empty() && res.back()=='.')
        {
            res.pop_back();
        }
        return res;
    }
};