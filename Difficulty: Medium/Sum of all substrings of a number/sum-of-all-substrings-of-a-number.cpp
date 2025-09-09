class Solution {
  public:
    int sumSubstrings(string &s) {
        // code here
    int n = s.size();
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        string d;
        for(int j=i;j<n;j++)
        {
            d+=s[j];
            sum+=stoll(d);
        }
    }
    return sum;
    }
};  