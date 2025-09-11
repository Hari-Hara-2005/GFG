class Solution {
  public:
    int minFlips(string& s) {
        // code here
        int n = s.size();
        int flip1=0, flip2=0;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            char expeted1 = (i%2 == 0)?'1':'0';
            char expeted2 = (i%2 == 0)?'0':'1';
            if(s[i]!=expeted1)flip1++;
            if(s[i]!=expeted2)flip2++;
        }
        return min(flip1,flip2);
    }
};
