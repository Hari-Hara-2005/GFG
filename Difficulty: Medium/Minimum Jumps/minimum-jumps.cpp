class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        int jump = 1;
        int step = arr[0];
        int maxi = arr[0];
        if(step == 0)return -1;
        for(int i=1;i<=n;i++)
        {
            if(i == (n-1))return jump;
            step--;
            maxi = max(maxi,arr[i]+i);
            if(step == 0)
            {
                jump++;
                if (i >= maxi) return -1;
                step = maxi - i;
            }
        }
        return -1;
    }
};
