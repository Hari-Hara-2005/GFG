class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        vector<int>pos;
        vector<int>neg;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                neg.push_back(arr[i]);
            }
            else{
                pos.push_back(arr[i]);
            }
        }
        int idx=0;
        for(int i=0;i<pos.size();i++)
        {
            arr[idx++]=pos[i];
        }
        for(int i=0;i<neg.size();i++)
        {
            arr[idx++]=neg[i];
        }
    }
};