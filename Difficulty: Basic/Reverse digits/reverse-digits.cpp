class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int rev = 0;
        while(n)
        {
            int digit = n%10;
            rev = (rev*10) + digit;
            n = n/10;
        }
        return rev;
    }
};