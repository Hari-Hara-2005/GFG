class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(i%2 == 1){
                continue;
            }
            ans.push_back(arr[i]);
        }
        return ans;
    }
};