class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        int i=0,j=0;
        vector<int>ans;
        while(i<n && j<m)
        {
            if(a[i] <= b[j])
            {
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i<n)
        {
            ans.push_back(a[i++]);
        }
        while(j<m)
        {
            ans.push_back(b[j++]);
        }
        for(int i=0;i<ans.size();i++)
        {
            if(i<n)a[i]=ans[i];
            else{
                b[i-n] = ans[i];
            }
        }
    }
};