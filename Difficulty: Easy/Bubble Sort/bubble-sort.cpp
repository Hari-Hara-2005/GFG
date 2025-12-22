class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int  n = arr.size();
        bool flag = false;
        for(int i=0;i<n-1;i++)
        {
            flag = false;
            for(int j=0;j<n-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    flag = true;
                }
            }
            if(!flag)break;
        }
    }
};