class Solution {
  public:
    void sortIt(vector<long long>& arr) {
        // code here.
        int n=arr.size();
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                even.push_back(arr[i]);
            }
            else{
                odd.push_back(arr[i]);
            }
        }
        sort(odd.begin(),odd.end(),greater<long long>());
        sort(even.begin(),even.end());
        int j=0;
        for(int i=0;i<odd.size();i++)
        {
            arr[j]=odd[i];
            j++;
        }
        for(int i=0;i<even.size();i++)
        {
            arr[j]=even[i];
            j++;
        }
    }
};