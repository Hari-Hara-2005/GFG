class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
         int n = arr.size();
        vector<int> count(n + 1, 0);
        int repeating = -1, missing = -1;
        
        for (int i = 0; i < n; i++) {
            count[arr[i]]++;
        }

        for (int i = 1; i <= n; i++) {
            if (count[i] == 0) missing = i;
            else if (count[i] == 2) repeating = i;
        }

        return {repeating, missing};
    }
};