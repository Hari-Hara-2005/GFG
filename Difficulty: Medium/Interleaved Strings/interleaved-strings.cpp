class Solution {
  public:
    bool isInterleave(string& s1, string& s2, string& s3) {
        // code here
        int n = s1.size();
        int m = s2.size();
        int x = s3.size();
        int i=0,j=0;
        bool flag1=false,flag2=false;
        while(i<n && j<x)
        {
            if(s1[i] == s3[j])
            {
                i++;
                j++;
                if(i==n)flag1=true;
            }
            else
            {
                j++;
            }
        }
        i=0,j=0;
        while(i<m && j<x)
        {
            if(s2[i] == s3[j])
            {
                i++;
                j++;
                if(i==m)flag2=true;
            }
            else
            {
                j++;
            }
        }
        if((n+m)==x && flag1 && flag2)return true;
        return false;
    }
};