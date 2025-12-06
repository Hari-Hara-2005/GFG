class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        string bi = "";
        string res="";
        int i = n;
        while(i>0)
        {
            if(i%2 == 1)
            {
                res+='1';
            }
            else{
                res+='0';
            }
            i = i/2;
        }
        reverse(bi.begin(),bi.end());
        if(res[k]== '1')return true;
        return false;
    }
};