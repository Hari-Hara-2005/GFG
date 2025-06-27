class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int more=target-arr[i];
            if(mp.find(more)!=mp.end())
            {
                return true;
            }
            mp[arr[i]]=i;
        }
        return false;
    }
};