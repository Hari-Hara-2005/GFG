class Solution {
  public:
    int transform(string A, string B) {
        // code here.
        int n = A.size();
        int m = B.size();
        if(n!=m)return -1;
        int i= n-1;
        int j=m-1;
        int moves=0;
        vector<int>ans(250,0);
        for(auto it:A)ans[it]++;
        for(auto it:B)ans[it]--;
        for(auto it:ans)if(it!=0)return -1;
        while(i>=0)
        {
            if(A[i]==B[j])
            {
                i--;
                j--;
            }
            else{
                i--;
                moves++;
            }
        }
        return moves;
    }
};
