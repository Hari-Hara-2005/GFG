class Solution {
  public:
    string crossPattern(string S) {
        // code here
        int n =S.size();
        string res="";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    res+=S[j];
                }
                else if(j==(n-i-1))
                {
                    res+=S[j];
                }
                else{
                    res+=' ';
                }
            }
        }
        return res;
    }
};