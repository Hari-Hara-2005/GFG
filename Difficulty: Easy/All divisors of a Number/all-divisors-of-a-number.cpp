class Solution {
  public:
    void print_divisors(int n) {
        // Code here
        vector<int>large;
        for(int i=1;i<=sqrt(n);i++)
        {
           if(n%i == 0)
           {
               cout<<i<<" ";
               if(i != n/i)
               {
                   large.push_back(n/i);
               }
           }
        }
        for(int i=large.size()-1;i>=0;i--)
        {
            cout<<large[i]<<" ";
        }
    }
};