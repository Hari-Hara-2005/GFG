class Solution {
  public:
    int setBit(int n) {
        // Write Your Code here
        string res="";
        while(n>0)
        {
            if(n%2 == 1)res+='1';
            else res+='0';
            n = n/2;
        }
        res+='0';
        for(int i=0;i<res.size();i++)
        {
            if(res[i] == '0')
            {
                res[i] = '1';
                break;
            }
        }
        reverse(res.begin(),res.end());
        int num =0;
        int idx=0;
        for(int i=res.size()-1;i>=0;i--)
        {
            if(res[i]=='1')
            num+=pow(2,idx);
            idx++;
        }
        return num;
    }
};