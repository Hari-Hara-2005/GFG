// User function template for C++

class Solution {
  public:
   int num(char ch)
        {
            if(ch=='I')
            {
                return 1;
            }
            else if(ch=='V')
            {
                return 5;
            }
            else if(ch=='X')
            {
                return 10;
            }
            else if(ch=='L')
            {
                return 50;
            }
            else if(ch=='C')
            {
                return 100;
            }
            else if(ch=='D')
            {
                return 500;
            }
            else if(ch=='M'){
                return 1000;
            }
        }
    int romanToDecimal(string &s) {
        // code here
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(i<n-1)
            {
            char ch1=s[i];
            char ch2=s[i+1];
            if(num(ch1) <num(ch2))
            {
                sum-=num(ch1);
            }
            else{
                sum+=num(ch1);
            }
            }
            else{
                sum+=num(s[i]);
            }
        }
        return sum;
    }
};