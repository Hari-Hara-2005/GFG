class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        int cnt=0;
        int n=arr.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
           if(arr[i]!=arr[i+1])
           {
              arr[j]=arr[i];
              j++;
           }
        }
        return j;
    }
};