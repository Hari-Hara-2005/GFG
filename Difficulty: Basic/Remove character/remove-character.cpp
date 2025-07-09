// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        string res="";
        for(int i=0;i<str1.size();i++)
        {
            bool flag = true;
            for(int j=0;j<str2.size();j++)
            {
                if(str1[i]==str2[j])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                res+=str1[i];
            }
        }
       return res;
    }
};
