class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int cnt0=0,cnt1=0,cnt2=0;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i] == 0)cnt0++;
            else if(arr[i] == 1)cnt1++;
            else cnt2++;
        }
        for(int i=0;i<n;i++)
        {
            if(cnt0)
            {
                arr[i] = 0;
                cnt0--;
            }
            else if(cnt1)
            {
                arr[i] = 1;
                cnt1--;
            }
            else
            {
                arr[i] = 2;
                cnt2--;
            }
        }
    }
};