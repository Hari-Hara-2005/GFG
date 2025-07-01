class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // add code here.
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                return i;
            }
        }
        return -1;
    }
};