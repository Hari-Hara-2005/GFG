class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        string res="";
        while(n>0)
        {
            if(n%2 == 0)res+='0';
            else
            res+='1';
            n = n/2;
        }
        for(int i=0;i<res.size();i++)
        {
         if(res[i] == '1')return i+1;
        }
        return 0;
    }
};