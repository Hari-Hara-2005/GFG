// User function Template for C++

class Solution {
  public:
    string complement(string bi) {
        // code here
        int n = bi.size();
        string res="";
        string once="";
        int carry =1;
        for(int i=0;i<n;i++)
        {
            if(bi[i] == '0')
            {
                once +='1';
            }
            else{
                once +='0';
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(once[i] == '1' && carry==1)
            {
                res+='0';
                carry = 1;
            }
            else if(once[i] == '0' && carry == 1)
            {
                res+='1';
                carry=0;
            }
            else{
                res+=once[i];
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};