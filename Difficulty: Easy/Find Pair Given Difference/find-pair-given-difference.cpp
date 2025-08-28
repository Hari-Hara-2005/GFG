
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        int n = arr.size();
        if(n==1)return false;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if((mp.find(x+arr[i])!=mp.end())||(mp.find(arr[i]-x)!=mp.end()))
            {
                return true;
            }
            else{
            mp[arr[i]]=i;
            }
        }
        return false;
    }
};
