class Solution {
  public:
    int priority(char ch)
    {
        if(ch == '+' || ch == '-')return 1;
        else if(ch == '*' || ch == '/')return 2;
        else if(ch == '^')return 3;
        else return-1;
    }
    string infixToPrefix(string &s) {
        // code here
        string res = "";
        int n =s.size(),i=0;
        stack<char>st;
        reverse(s.begin(),s.end());
        while(i<n)
        {
            if(isalnum(s[i]))
            {
                res+=s[i];
            }
            else if(s[i] == ')')
            {
                st.push(s[i]);
            }
            else if(s[i] == '(')
            {
                while(!st.empty() && st.top() !=')')
                {
                    res+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                if(s[i] == '^'){
              while (!st.empty() && (priority(st.top()) >= priority(s[i])))
                {
                    res+=st.top();
                    st.pop();
                }
                }
                else{
                    while (!st.empty() && (priority(st.top()) > priority(s[i])))
                {
                    res+=st.top();
                    st.pop();
                }
                }
                st.push(s[i]);
            }
            i++;
        }
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
