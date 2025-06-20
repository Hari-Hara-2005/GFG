class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rev(vector<int>& arr,int i,int j)
    {
        while(i<=j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
       rev(arr,0,d-1);
       rev(arr,d,n-1);
       rev(arr,0,n-1);
    }
};