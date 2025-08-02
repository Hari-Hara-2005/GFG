class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        int n= s1.size();
        int m = s2.size();
        if(n!=m)return false;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return (s1 == s2);
    }
};