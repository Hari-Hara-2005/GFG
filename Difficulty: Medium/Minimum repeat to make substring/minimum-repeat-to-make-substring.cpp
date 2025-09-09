class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        // code here
        int n = s1.size();
        int m = s2.size();
        string temp=s1;
        int cnt =1;
        while(temp.size()<m)
        {
            temp+=s1;
            cnt++;
        }
        if(temp.find(s2)!=string::npos)return cnt;
        temp+=s1;
        cnt++;
        if(temp.find(s2)!=string::npos)return cnt;
        return -1;
    }
};