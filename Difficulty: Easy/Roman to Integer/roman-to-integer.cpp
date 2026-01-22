class Solution {
  public:
    int nums(char ch)
    {
        if(ch=='I')return 1;
        else if(ch=='V')return 5;
        else if(ch == 'X')return 10;
        else if(ch == 'L')return 50;
        else if(ch == 'C')return 100;
        else if(ch == 'D')return 500;
        else if(ch == 'M')return 1000;
        return 0;
    }
    int romanToDecimal(string &s) {
        // code here
        int n = s.size();
        int res=0;
        for(int i=0;i<n-1;i++)
        {
            int num1 = nums(s[i]);
            int num2 = nums(s[i+1]);
            if(num1<num2)
            {
                res-=num1;
            }
            else{
                res+=num1;
            }
        }
        res+=nums(s[n-1]);
        return res;
    }
};