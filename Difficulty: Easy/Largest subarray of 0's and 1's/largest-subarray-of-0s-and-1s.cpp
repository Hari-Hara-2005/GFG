class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        int maxi=0;
        int n=arr.size();
        int sum=0;
        unordered_map<int,int>mpp;
        mpp[0]=-1;
        for(int i=0;i<n;i++)
        {
            sum+=(arr[i]?1:-1);
            if(mpp.find(sum)!=mpp.end())
            {
                maxi=max(maxi,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
        return maxi;
    }
};