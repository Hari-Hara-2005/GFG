
class Solution {
public:
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {
        vector<pair<int, int>> ans;
        unordered_map<int, int> freq; // store frequency of arr2 elements
        
        for (int val : arr2) {
            freq[val]++;
        }
        
        for (int x : arr1) {
            int y = target - x;
            if (freq.find(y) != freq.end()) {
                for (int i = 0; i < freq[y]; i++) { // add pair as many times as it appears
                    ans.push_back({x, y});
                }
            }
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};