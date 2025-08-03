// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        string word1=arr[0];
        string word2=arr[n-1];
        string res="";
        for(int i=0;i<n;i++)
        {
            if(word1[i]!=word2[i])
            {
                break;
            }
            res+=word1[i];
        }
        return(n==1)?arr[0]:res;
    }
};