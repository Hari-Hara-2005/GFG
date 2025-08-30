class Solution {
  public:
    int power(int n,int x)
    {
        int ans=1;
        for(int i=1;i<=n;i++)
        {
            ans*=x;
        }
        return ans;
    }
    
    int nthRoot(int n, int m) {
       int low = 1;
       int high = m;
       while(low<=high)
       {
           int mid = low + (high-low)/2;
           int check = power(n,mid);
           if(m == check)
           {
               return mid;
           }
           else if(check>m)
           {
               high = mid-1;
           }
           else{
               low = mid+1;
           }
       }
       return -1;
    }
};