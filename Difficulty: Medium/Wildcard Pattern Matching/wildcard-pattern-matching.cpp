class Solution {
  public:
    bool wildCard(string &txt, string &pat) {
        // code here
        int n = txt.size();
        int m = pat.size();
        int i=0,j=0;
        int stIdx =-1,match=0;
        while(i<n)
        {
            if(j<m && txt[i] == pat[j] || pat[j] == '?')
            {
                i++;
                j++;
            }
            else if(j<m && pat[j] == '*'){
                stIdx = j;
                match = i;
                j++;
            }
            else if(stIdx != -1)
            {
                j=stIdx+1;
                match++;
                i = match;
            }
            else{
                return false;
            }
        }
        while(j<m && pat[j] =='*')
        {
            j++;
        }
        return j==m;
    }
};