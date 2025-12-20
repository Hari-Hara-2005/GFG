// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int num = 0;
        int temp = n;
        while(n > 0)
        {
            int rem = n%10;
            int digit = rem * rem *rem;
            num+=digit;
            n = n/10;
        }
        if(temp == num)return true;
        return false;
    }
};