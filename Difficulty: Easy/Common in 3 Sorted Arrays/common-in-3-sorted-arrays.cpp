class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<arr1.size();i++)
        {
            if(arr1[i]!=arr1[i+1]){
                mp[arr1[i]]++;
            }
        }
        for(int i=0;i<arr2.size();i++)
        {
            if(arr2[i]!=arr2[i+1]){
                mp[arr2[i]]++;
            }
        }
        for(int i=0;i<arr3.size();i++)
        {
if(arr3[i]!=arr3[i+1]){
                mp[arr3[i]]++;
            }
        }
        for(auto it:mp)
        {
         if(it.second>=3)
         {
            ans.push_back(it.first); 
         }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};