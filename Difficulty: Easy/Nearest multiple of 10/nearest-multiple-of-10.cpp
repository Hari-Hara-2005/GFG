
class Solution {
  public:
    string roundToNearest(string& s) {
        // Complete the function
        int n =s.size();
        int last = s[n-1]-'0';
        if(last<=5){
            s[n-1]='0';
            return s;
        }
        
        s[n-1]='0';
        int carry = 1;
        for(int i=n-2;i>=0 && carry;i--)
        {
            int d = s[i]-'0'+carry;
            if(d== 10)
            {
                s[i]='0';
                carry =1;
            }
            else{
                s[i] = d+'0';
                carry =0;
            }
        }
        if(carry)
        {
            s = '1'+s;
        }
        return s;
    }
};