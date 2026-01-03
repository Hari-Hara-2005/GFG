// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int>pos,neg;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)neg.push_back(arr[i]);
            else{
                pos.push_back(arr[i]);
            }
        }
        n=0;
        int i=0,m=0;
        while(n<pos.size() && m<neg.size())
        {
            arr[i++] = pos[n++];
            arr[i++] = neg[m++];
        }
        while(n<pos.size())
        {
            arr[i++] = pos[n++];
        }
        while(m<neg.size())
        {
            arr[i++] = neg[m++];
        }
    }
};