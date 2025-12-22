class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low <= high)
        {
            int pivot = partition(arr,low,high); 
            quickSort(arr,low,pivot-1);
            quickSort(arr,pivot+1,high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        // code here
        int idx =low-1;
        int pivot = arr[high];
        for(int i=low;i<high;i++)
        {
            if(arr[i] < pivot)
            {
                idx++;
                swap(arr[i],arr[idx]);
            }
        }
        idx++;
        swap(arr[idx],arr[high]);
        return idx;
    }
};