class Solution {
  public:
    string encode(string s) {
        // code here
    int n=s.size();
    string res="";
    int i=0;
    while(i<n){
        int cnt=0;
        char ch=s[i];
        while(i<n && s[i]==ch){
            cnt++;
            i++;
        }
        res+=ch;
        res+=to_string(cnt);
    }
    return res;
    }
};