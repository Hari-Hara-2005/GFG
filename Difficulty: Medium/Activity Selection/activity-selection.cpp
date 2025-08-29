class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        int n  = start.size();
        int cnt = 1;
        int i =0;
        int j=0;
        vector<pair<int,int>>ans;
        for(int i=0;i<n;i++)
        {
           ans.push_back({finish[i],start[i]});
        }
        sort(ans.begin(),ans.end());
        int lastElement = ans[0].first;
        for(int i=1;i<n;i++)
        {
            if(ans[i].second > lastElement)
            {
                cnt++;
                lastElement = ans[i].first;
            }
        }
        return cnt;
    }
};