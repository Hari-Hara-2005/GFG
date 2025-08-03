// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        set<pair<int,int>>st;
        int n =arr.size();
        int i=0;
        int j=n-1;
        int target = 0;
        sort(arr.begin(),arr.end());
        while(i<j){
            int sum = arr[i]+arr[j];
            if(sum == target && i!=j)
            {
                st.insert({arr[i],arr[j]});
                i++;
                j--;
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
        for(auto it:st){
            ans.push_back({it.first,it.second});
        }
        return ans;
    }
};