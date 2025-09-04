class Solution {
  public:

    // Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n) {
        // Your code here
        map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        string name="";
        int cnt =0;
        for(auto it:mp)
        {
            if(it.second > cnt)
            {
                cnt = it.second;
                name = it.first;
            }
        }
        return {name,to_string(cnt)};
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
    }
};