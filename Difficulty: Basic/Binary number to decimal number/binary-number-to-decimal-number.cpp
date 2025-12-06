class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int res=0;
        reverse(b.begin(),b.end());
        for(int i=b.size()-1;i>=0;i--)
        {
            if(b[i]=='1')
            res+=pow(2,i);
            else
            res+=0;
        }
        return res;
    }
};