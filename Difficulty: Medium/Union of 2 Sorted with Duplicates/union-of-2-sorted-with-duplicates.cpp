class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
    set<int>st;
    for(int nums:a)
    {
        st.insert(nums);
    }
    for(int nums:b)
    {
        st.insert(nums);
    }
    vector<int>ans;
    for(int nums:st)
    {
        ans.push_back(nums);
    }
    return ans;
    }
};