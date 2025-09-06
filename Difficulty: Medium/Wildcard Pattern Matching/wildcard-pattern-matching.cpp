class Solution {
  public:
    bool wildCard(string &txt, string &pat) {
        // code here
        int n = txt.size();
        int m = pat.size();
        int startIdx = -1;
        int match = 0;
        int i=0,j=0;
        while(i<n)
        {
            if(j<m && txt[i] == pat[j] || pat[j] == '?')
            {
                i++;
                j++;
            }
            else if(j<m && pat[j] == '*')
            {
                startIdx = j;
                match = i;
                j++;
            }
            else if(startIdx != -1)
            {
                j = startIdx+1;
                match++;
                i = match;
            }
            else{
                return false;
            }
        }
        while(j<m && pat[j] == '*' )
        {
            j++;
        }
        return j == m;
    }
};