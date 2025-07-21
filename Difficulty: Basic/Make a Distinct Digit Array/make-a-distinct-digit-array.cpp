
class Solution {
  public:
    vector<int> common_digits(vector<int> nums) {
        // Code here
    int n=nums.size();
    map<int,int>mp;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int num=nums[i];
        while(num>0)
        {
            int ld=num%10;
            num=num/10;
            mp[ld]++;
        }
    }
    for(auto it:mp)
    {
        ans.push_back(it.first);
    }
    return ans;
    }
};