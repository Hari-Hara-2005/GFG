class Solution {
  public:
    string encode(string s) {
        // code here
    int n=s.size();
    char ch=s[0];
    int cnt=0;
    string result="";
    for(int i=0;i<n;i++)
    {
        if(s[i]==ch){
            cnt++;
        }
        else{
            result+=ch;
            result+=to_string(cnt);
            ch=s[i];
            cnt=1;
        }
    }
    result+=ch;
    result+=to_string(cnt);
    return result;
    }
};