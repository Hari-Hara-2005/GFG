// User function Template for C++

class Solution {
  public:
    string postToPre(string s) {
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
            else{
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                string str = s[i]+s2+s1;
                st.push(str);
            }
            i++;
        }
        return st.top();
    }
};