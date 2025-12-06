class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        for(int i=0;i<n;i++)
        {
            if(pow(2,i) == n)
            {
                return true;
            }
        }
        return false;
    }
};