class Solution {
  public:
    int fact = 1;
    int factorial(int n) {
        // code here
        if(n==1)return fact;
        fact = fact * n;
        factorial(n-1);
    }
};