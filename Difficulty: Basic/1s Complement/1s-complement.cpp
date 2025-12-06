
class Solution {
  public:
    string onesComplement(string S, int N) {
        // code here
        string res="";
        for(int i=0;i<S.size();i++)
        {
            if(S[i] == '0')
            {
                res+='1';
            }
            else{
                res+='0';
            }
        }
        return res;
    }
};