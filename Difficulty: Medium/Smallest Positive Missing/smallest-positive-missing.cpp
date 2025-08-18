class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int  n = arr.size();
        // int cnt =1;
        // int mini = INT_MAX;
        // sort(arr.begin(),arr.end());
        // for(int i=0;i<n;i++)
        // {
        //     if(arr[i]==cnt && arr[i]!=arr[i-1])
        //     {
        //         cnt++;
        //     }
        //     else if(arr[i]>0 && arr[i]!=cnt)
        //     {
                
        //     }
        //     else{
        //         continue;
        //     }
        // }
        // return mini;
        
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(mp[i] == 0)
            {
                return i;
            }
        }
        return (n+1);
    }
};