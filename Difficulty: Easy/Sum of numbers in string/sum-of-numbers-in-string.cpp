class Solution {
  public:
    int findSum(string& s) {
        // code here
        int n= s.size();
        int num = 0;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                num = num * 10 +(s[i]-'0');
            }
            else{
                sum+=num;
                num=0;
            }
        }
        sum+=num;
        return sum;
    }
};