// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==x)
                {
                    return true;
                }
            }
        }
        return false;
    }
};