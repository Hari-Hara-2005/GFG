// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        string res="";
        int  cnt=0;
        int idx=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==ch)
            {
                cnt++;
            }
            if(cnt==count)
            {
                idx=i;
                break;
            }
        }
        if(cnt<count)return "";
        for(int j=idx+1;j<s.size();j++)
        {
            res+=s[j];
        }
        return res;
    }
};