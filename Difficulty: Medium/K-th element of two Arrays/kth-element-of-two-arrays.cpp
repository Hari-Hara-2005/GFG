class Solution {
	public:
	int kthElement(vector<int> &a, vector<int> &b, int k) {
		// code here
		int n = a.size();
		int m = b.size();
		int i = 0, j = 0;
		vector<int>ans;
		while (i<n && j<m)
			{
			if (a[i] <= b[j])
				{
				ans.push_back(a[i]);
				i++;
			}
			else {
				ans.push_back(b[j]);
				j++;
			}
		}
		while (i<n)
			{
			ans.push_back(a[i]);
			i++;
		}
		while (j<m)
			{
			ans.push_back(b[j]);
			j++;
		}
		
		int low = 0, high = ans.size() - 1;
		while (low <= high)
			{
			int mid = low + (high - low)/2;
			if (mid == k - 1)return ans[mid];
			else if (mid<k)
				{
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}
		return - 1;
	}
};
