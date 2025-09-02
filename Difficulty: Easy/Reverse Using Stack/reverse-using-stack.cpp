class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char>st;
        int n = S.size();
        string res="";
        for(int i=0;i<n;i++)
        {
            st.push(S[i]);
        }
        for(int i=0;i<n;i++)
        {
            res+=st.top();
            st.pop();
        }
        return res;
    }
};