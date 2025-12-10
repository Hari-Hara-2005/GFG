class Solution {
  public:
          int prority(char ch)
        {
            if (ch == '+') return 1;
            else if(ch == '-') return 1;
            else if(ch == '*') return 2;
            else if(ch == '/') return 2;
            else if(ch == '^')return 3;
            else return -1;
        }
    string infixToPostfix(string& s) {
        // code here
        stack<int>st;
        int n = s.size();
        string res="";
        for(int i=0;i<n;i++)
        {
            if((s[i] >= 'A' && s[i] <='Z') || (s[i] >= 'a' && s[i] <='z') || (s[i] >= '0' && s[i] <='9'))
            {
                res+=s[i];
            }
            else if(s[i] == '(')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                while(!st.empty() && st.top() != '(')
                {
                    res+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && prority(st.top()) >= prority(s[i]) &&   !(s[i] == '^' && st.top() == '^'))
                {
                    res+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        return res;
    }
};
