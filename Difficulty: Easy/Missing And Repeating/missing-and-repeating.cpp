class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
        mp[arr[i]]++;
        }
        int missing=-1,repating=0;
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==2)
            {
                repating=i;
            }
            if(mp[i]==0)
            {
                missing=i;
            }
        }
        ans.push_back(repating);
        ans.push_back(missing);
        return ans;
    }
};