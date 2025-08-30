class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int ans = -1;
        for(int i=1;i<=n;i++)
        {
            int square = i*i;
            if(square<=n)ans = i;
        }
        return ans;
    }
};