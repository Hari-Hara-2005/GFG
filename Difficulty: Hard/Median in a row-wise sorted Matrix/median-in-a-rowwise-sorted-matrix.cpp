class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        vector<int>arr;
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                arr.push_back(mat[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        int mid = (arr.size()-1)/2;
        for(int i=0;i<arr.size();i++)
        {
            if(i == mid)return arr[mid];
        }
        return -1;
    }
};
