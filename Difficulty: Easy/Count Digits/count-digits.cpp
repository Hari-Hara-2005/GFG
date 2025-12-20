class Solution {
  public:
    int countDigits(int n) {
        // code here
        int cnt = 0; 
        while(n)
        {
            cnt++;
            n = n/10;
        }
        return cnt;
    }
};