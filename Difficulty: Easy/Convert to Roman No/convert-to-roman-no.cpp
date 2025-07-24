class Solution {
  public:
    string convertToRoman(int n) {
        // code here
        static vector<int>val={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        static vector<string>num={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string res="";
        for(int i=0;i<val.size();i++)
        {
            if(n==0)break;
            int times = n/val[i];
            while(times--)
            {
                res+=num[i];
            }
            n=n%val[i];
        }
        return res;
    }
};