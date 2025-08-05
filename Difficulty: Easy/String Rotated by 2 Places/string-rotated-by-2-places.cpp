class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        int n = s1.size();
        int m = s2.size();
        if(n!=m)return 0;
        string res1;
        string res2;
        for(int i=2;i<n;i++)
        {
            res1+=s1[i];
        }
        for(int i=0;i<2;i++)
        {
            res1+=s1[i];
        }
       if(res1==s2)return true;
        for(int i=2;i<n;i++)
        {
            res2+=s2[i];
        }
        for(int i=0;i<2;i++)
        {
            res2+=s2[i];
        }
       if(res2==s1)return true;
        return false;
    }
};
