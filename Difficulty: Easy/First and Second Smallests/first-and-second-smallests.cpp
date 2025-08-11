class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int n = arr.size();
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<firstMin)
            {
                secondMin=firstMin;
                firstMin = arr[i];
            }
            else if(arr[i]<secondMin && arr[i]!=firstMin)
            {
                secondMin = arr[i];
            }
        }
        if(secondMin == INT_MAX)return {-1};
        return {firstMin,secondMin};
    }
};