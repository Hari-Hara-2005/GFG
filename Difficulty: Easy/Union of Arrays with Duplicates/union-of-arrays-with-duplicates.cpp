class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int>st;
        vector<int>ans;
        for(int i=0;i<a.size();i++)
        {
            st.insert(a[i]);
        }
        for(int i=0;i<b.size();i++)
        {
            st.insert(b[i]);
        }
        for(auto it:st)
        {
            ans.push_back(it);
        }
        return ans;
    }
};