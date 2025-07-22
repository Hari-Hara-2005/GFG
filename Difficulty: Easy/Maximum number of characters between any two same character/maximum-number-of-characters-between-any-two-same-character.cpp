int maxChars(string s) {
    // your code here
    map<char,int>mp;
    int n=s.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(mp.find(s[i]) !=mp.end())
        {
        maxi = max(maxi,(i-mp[s[i]]-1));
        }
        else{
        mp[s[i]]=i;
        }
    }
    return maxi>=0?maxi:-1;
}