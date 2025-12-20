class Solution {
  public:
    int i = 0;
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(i>=n/2)return;
        swap(arr[i],arr[n-i-1]);
        i++;
        reverseArray(arr);
    }
};