// User function template for C++
class Solution {
  public:
    string findSum(string &s1, string &s2) {
        // Your code goes here
        int n = s1.size();
        int m = s2.size();
        int i  = n-1;
        int j =m-1;
        int carry=0;
        string res="";
        while(i>= 0 && j>=0)
        {
            int sum = (s1[i]-'0') + (s2[j]-'0')+carry;
            int rem = sum%10;
            res+=to_string(rem);
            carry = sum/10;
            i--;
            j--;
        }
         while(i>= 0)
        {
            int sum = (s1[i]-'0') +carry;
            int rem = sum%10;
            res+=to_string(rem);
            carry = sum/10;
            i--;
        }
         while(j>=0)
        {
            int sum = (s2[j]-'0')+carry;
            int rem = sum%10;
            res+=to_string(rem);
            carry = sum/10;
            j--;
        }
           if(carry){
           res+='1';
       }
       
       int k=res.size()-1;
       while(k>0 && res[k]=='0'){
           
           res.pop_back();
           k--;
       }
       reverse(res.begin(),res.end());
        return res;
    }
};