

class Solution {
  public:
    string colName(long long int n) {
        // your code here
        string res = "";
        while(n>0)
        {
            n--;
            int rem = n%26;
            res+='A'+rem;
            n = n/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};