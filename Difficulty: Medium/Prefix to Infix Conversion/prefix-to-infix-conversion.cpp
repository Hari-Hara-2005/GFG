// User function Template for C++

class Solution {
  public:
    string preToInfix(string s) {
        // Write your code here
        int n = s.size();
        int i = n-1;
        stack<string>st;
        while(i>=0)
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
                string res = "(" + t1 + s[i] + t2 +")";
                st.push(res);
            }
            i--;
        }
        return st.top();
    }
};