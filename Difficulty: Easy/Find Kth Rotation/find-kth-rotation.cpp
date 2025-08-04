class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr[cnt])
            {
                cnt=i;
            }
        }
        return cnt;
    }
};
