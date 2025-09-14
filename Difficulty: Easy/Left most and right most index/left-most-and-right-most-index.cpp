class Solution {
  public:
    pair<long, long> indexes(vector<long long> v, long long x) {
        // code here
        int start=-1;
        int end =-1;
        int n = v.size();
        for(int i=0;i<n;i++)
        {
            if(start == -1 && v[i]==x)
            {
                start=i;
            }
            else if(v[i]==x){
                end = i;
            }
        }
        if(start!=-1 && end!=-1)
        {
            return {start,end};
        }
        return {start,start};
    }
};