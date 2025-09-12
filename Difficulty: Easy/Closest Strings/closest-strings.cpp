// User function template for C++
class Solution {
  public:

    int shortestDistance(vector<string> &s, string word1, string word2) {
        // Your code goes here
        int n = s.size();
        int mini = INT_MAX;
        int idx1=-1;
        int idx2=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]==word1)
            {
                idx1=i;
            }
            if(s[i]==word2)
            {
                idx2=i;
            }
            if(idx1!=-1 && idx2!=-1)
            {
                mini = min(mini,abs(idx2-idx1));
            }
        }
        return mini;
    }
};