class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        if(m == 0)return 0;
        for(int i=1;i<=m;i++)
        {
            int fact =1;
            for(int j=0;j<n;j++)
            {
                fact*=i;
            }
            if(fact == m)return i;
        }
        return -1;
    }
};