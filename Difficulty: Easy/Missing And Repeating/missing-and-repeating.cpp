class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        int n  = arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int mis,rep;
        for(int i=1;i<=n;i++)
        {
            if(mp[i] == 0)mis=i;
            if(mp[i] >=2)rep =i;
        }
        return{rep,mis};
    }
};