class Solution {
  public:
    vector<int> bitonicGenerator(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                even.push_back(arr[i]);
            }
            else{
                odd.push_back(arr[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<long long>());
        int j=0;
        for(int i=0;i<even.size();i++)
        {
            arr[j++]=even[i];
        }
        for(int i=0;i<odd.size();i++)
        {
            arr[j++]=odd[i];
        }
        return arr;
    }
};