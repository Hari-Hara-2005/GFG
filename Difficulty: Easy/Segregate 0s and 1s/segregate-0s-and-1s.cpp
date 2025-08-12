// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(arr[i]==1&&arr[j]==0)
            {
                swap(arr[i],arr[j]);
            }
            else if(arr[i]==1 && arr[j]!=0)
            {
                j--;
            }
            else{
                i++;
            }
        }
    }
};