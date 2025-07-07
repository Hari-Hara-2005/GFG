
class Solution {
  public:
    bool isSubSequence(string A, string B) {
        // code here
        int n=A.size();
        int m=B.size();
        int j=0;
        for(int i=0;i<m;i++)
        {
            if(A[j]==B[i])
            {
               j++;
            }
        }
        if(j==n)return true;
        return false;
    }
};