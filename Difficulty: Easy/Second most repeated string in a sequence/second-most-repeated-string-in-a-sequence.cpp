
class Solution {
  public:
    string secFrequent(string arr[], int n) {
        // code here.
        unordered_map<string,int>mp;
        int maxi=-1;
        int smaxi=-1;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]>maxi)
            {
                smaxi=maxi;
                maxi = mp[arr[i]];
            }
            else if(mp[arr[i]]>smaxi && mp[arr[i]]<maxi)
            {
                smaxi=mp[arr[i]];
            }
        }
        for(auto it:mp)
        {
            if(it.second == smaxi)return it.first;
        }
        return "";
    }
};