class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        int n = s.size();
        string res = "";
        for(int i=0;i<n;i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    res+=tolower(s[i]);
                }
                else{
                res+=s[i];
                }
            }
        }
        int i=0;
        int j=res.size()-1;
        while(i<j)
        {
            if(res[i] != res[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};