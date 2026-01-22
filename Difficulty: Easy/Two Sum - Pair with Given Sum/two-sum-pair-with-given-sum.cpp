class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        map<int,int>mp;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            int more = target - arr[i];
            if(mp.find(more)!=mp.end())
            {
                return true;
            }
            mp[arr[i]] = i;
        }
        return false;
    }
};