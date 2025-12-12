// User function Template for C++

class Solution {
  public:
    string postToInfix(string s) {
        // Write your code here
        int n = s.size();
        int i = 0;
        stack<string>st;
        while(i<n)
        {
            if(isalnum(s[i]))
            {
                st.push(string(1,s[i]));
            }
            else
            {
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();
                string res = "(" + t2 + s[i] + t1 + ")";
                st.push(res);
            }
            i++;
        }
        return st.top();
    }
};