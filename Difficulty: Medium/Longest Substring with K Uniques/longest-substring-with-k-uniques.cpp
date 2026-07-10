class Solution {
	public:
	int longestKSubstr(string &s, int k) {
		// code here
		int n = s.size();
		int l = 0, r = 0, maxi = -1;
		unordered_map<char, int>mp;
		while (r<n)
			{
			mp[s[r]]++;
			while (mp.size() > k)
				{
				mp[s[l]]--;
				if (mp[s[l]] == 0)mp.erase(s[l]);
				l++;
			}
			if (mp.size() == k) {
				int len = r - l + 1;
				maxi = max(maxi, len);
			}
			r++;
		}
		return maxi;
	}
};
