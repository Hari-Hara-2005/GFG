class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        vector<int>ans1(256,0);
        vector<int>ans2(256,0);
        int n = s1.size();
        int m = s2.size();
        if(n!=m)return false;
        for(int i=0;i<n;i++){
         if(ans1[s1[i]]!=ans2[s2[i]])return false;
         ans1[s1[i]]=i+1;
         ans2[s2[i]]=i+1;
        }
        return true;
    }
};