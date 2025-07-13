int* greaterElement(int arr[], int n) {
    // Complete the function
    unordered_map<int,int>mp;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        ans.push_back(arr[i]);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<n-1;i++)
    {
        mp[ans[i]]=ans[i+1];
    }
    mp[ans[n-1]]=-10000000;
    for(int i=0;i<n;i++)
    {
        arr[i]=mp[arr[i]];
    }
    return arr;
}
