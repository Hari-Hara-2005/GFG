
class Solution {
  public:
    int countWords(string list[], int n) {
        // code here.
        int cnt=0;
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[list[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second == 2)cnt++;
        }
        return cnt;
    }
};