class Solution {

  public:
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
        // Your code goes here
    int n=a.size();
    int m=b.size();
    unordered_map<int,int>mp;
    vector<int>ans;
    for(int i=0;i<m;i++)
    {
        mp[b[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]]==0)
        {
            ans.push_back(a[i]);
        }
    }
    return ans;
    }
};
