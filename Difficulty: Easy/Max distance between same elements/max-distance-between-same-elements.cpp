class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        int n=arr.size();
        int maxi=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(!mp.empty() && mp.find(arr[i])!=mp.end())
            {
                maxi=max(maxi,i-mp[arr[i]]);
            }
            else{
                mp[arr[i]]=i;
            }
        }
        return maxi;
    }
};