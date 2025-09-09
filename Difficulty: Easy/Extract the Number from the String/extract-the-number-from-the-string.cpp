// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string s) {

        // code here
        int n = s.size();
        bool hasnine = false;
        string word = "";
        long long maxi = -1;
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                word+=s[i];
                if(s[i]=='9')hasnine = true;
            }
            else{
                if(!word.empty())
                {
                    if(!hasnine){
                    long long num = stoll(word);
                    maxi = max(maxi,num);}
                }
                word = "";
                hasnine = false;
            }
        }
        if(!word.empty())
                {
                    if(!hasnine){
                    long long num = stoll(word);
                    maxi = max(maxi,num);}
                }
        return maxi;
    }
};