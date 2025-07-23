
class Solution {
  public:
    string reverse(string s) {
        // code here.
        int n=s.size();
        int i=0,j=n-1;
        while(i<j)
        {
            if((s[i]>='a'&&s[i]<='z' || s[i]>='A' && s[i]<='Z') && (s[j]>='a'&&s[j]<='z' || s[j]>='A'&&s[j]<='Z'))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z'))
            {
                i++;
            }
            else{
                j--;
            }
        }
        return s;
    }
};