class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        // code  here
        map<int,int>mp;
        int cnt =0 ;
        for(auto it:a){
            mp[it]++;
        }
        for(auto it:b){
            mp[it]++;
        }
        for(auto it:mp)
        {
            if(it.second == 2)
            {
                cnt++;
            }
        }
        return cnt;
    }
};