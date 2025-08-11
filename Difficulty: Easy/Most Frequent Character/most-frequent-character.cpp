class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int n = s.size();
        int maxi = INT_MIN;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            int num = mp[s[i]];
            maxi = max(num,maxi);
        }
        for(auto it:mp)
        {
            if(it.second == maxi)
            {
                return it.first;
            }
        }
        return -1;
    }
};