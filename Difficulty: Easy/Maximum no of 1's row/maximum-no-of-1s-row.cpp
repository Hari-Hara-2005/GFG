class Solution {
  public:
    int maxOnes(vector<vector<int>> &Mat, int N, int M) {
        // your code here
        int n = Mat.size();
        int maxi = -1;
        int rowIndex = 0;
        for(int i=0;i<N;i++)
        {
            int cnt = 0;
            for(int j=0;j<M;j++)
            {
                if(Mat[i][j] == 1)cnt++;
            }
            if(cnt>maxi)
            {
                maxi = cnt;
                rowIndex = i;
            }
        }
        return rowIndex;
    }
};