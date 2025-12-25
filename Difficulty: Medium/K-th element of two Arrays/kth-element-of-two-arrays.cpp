class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int n = a.size();
        int m = b.size();
        vector<int>arr;
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                arr.push_back(a[i++]);
            }
            else{
                arr.push_back(b[j++]);
            }
        }
        while(i<n)
        {
            arr.push_back(a[i++]);
        }
        while(j<m)
        {
            arr.push_back(b[j++]);
        }
        for(int i=0;i<arr.size();i++)
        {
            if(i==k-1)return arr[i];
        }
    }
};