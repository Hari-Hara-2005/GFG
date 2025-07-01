// User function template for C++
class Solution {
  public:
  static bool cmp(string a,string b)
  {
      return (a+b)>(b+a);
  }
    string findLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<string>ans;
        string res="";
        for(int i=0;i<n;i++)
        {
            ans.push_back(to_string(arr[i]));
        }
        sort(ans.begin(),ans.end(),cmp);
        for(int i=0;i<n;i++)
        {
            res+=ans[i];
        }
        if(res[0]=='0')return"0";
        return res;
    }
};