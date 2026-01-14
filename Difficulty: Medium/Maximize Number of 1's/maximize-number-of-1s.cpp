class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int l=0,r=0,len=0,zero=0,maxi=0;
        while(r<n)
        {
            if(arr[r] == 0)zero++;
            while(zero>k)
            {
                if(arr[l] == 0)zero--;
                l++;
            }
            len = r-l+1;
            maxi = max(maxi,len);
            r++;
        }
        return maxi;
    }
};
