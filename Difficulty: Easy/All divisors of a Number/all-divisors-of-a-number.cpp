class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        vector<int>arr;
        for(int i=1;i*i<=n;i++)
        {
            if(n % i == 0){
                cout<<i<<" ";
                if(i != n/i)arr.push_back(n/i);
            }
        }
        for(int i=arr.size()-1;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
    }
};