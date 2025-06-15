class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
        vector<int>ans;
        for(int i=d;i<n;i++)
        {
            ans.push_back(arr[i]);
        }
        for(int i=0;i<d;i++)
        {
            ans.push_back(arr[i]);
        }
        arr=ans;
    }
};