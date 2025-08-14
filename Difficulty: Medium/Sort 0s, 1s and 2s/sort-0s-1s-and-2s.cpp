class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i] == 0)
            {
                cnt0++;
            }
            else if(arr[i] == 1)
            {
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
        int idx=0;
        for(int i=0;i<cnt0;i++)
        {
            arr[idx++] = 0;
        }
        for(int i=0;i<cnt1;i++)
        {
            arr[idx++] =1;
        }
        for(int i=0;i<cnt2;i++)
        {
            arr[idx++] =2;
        }
    }
};