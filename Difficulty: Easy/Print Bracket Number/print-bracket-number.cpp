// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string s) {
        // Your code goes here
        vector<int>ans;
        int n = s.size();
        int num = 0;
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                num++;
                ans.push_back(num);
                st.push(num);
            }
            else if(s[i]==')')
            {
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};