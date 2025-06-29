class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if (low < high) { 
        int pIdx=partition(arr,low,high);
        quickSort(arr,low,pIdx-1);
        quickSort(arr,pIdx+1,high);
        }
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        int idx =low-1;
        int pivot=arr[high];
        for(int i=low;i<high;i++)
        {
            if(arr[i]<=pivot)
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