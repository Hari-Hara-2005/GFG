class Solution {
  public:
    int minRow(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int mini =INT_MAX;
        int rowIdx = 1;
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)cnt++;
            }
            if(cnt<mini)
            {
                mini=cnt;
                rowIdx=i;
            }
        }
        return rowIdx+1;
    }
};