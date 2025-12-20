class Solution {
  public:
    int fib = 0;
    int nthFibonacci(int n) {
        // code here
        if(n== 0 || n == 1)return n;
        fib = nthFibonacci(n-1) + nthFibonacci(n-2);
        return fib;
    }
};