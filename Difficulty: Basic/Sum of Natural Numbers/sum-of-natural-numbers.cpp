class Solution {
  public:
    int sum = 0;
    int findSum(int n) {
        // code here
        if(n == 0)return sum;
        sum+=n;
        findSum(n-1);
    }
};
