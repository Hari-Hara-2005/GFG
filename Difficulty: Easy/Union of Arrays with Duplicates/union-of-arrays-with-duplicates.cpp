class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        int i=0,j=0;
        set<int>st;
        while(i<n && j<m)
        {
            st.insert(a[i++]);
            st.insert(b[j++]);
        }
        while(i<n)
        {
            st.insert(a[i++]);
        }
        while(j<m)
        {
            st.insert(b[j++]);
        }
        vector<int>ans;
        for(auto it:st)
        {
            ans.push_back(it);
        }
        return ans;
    }
};