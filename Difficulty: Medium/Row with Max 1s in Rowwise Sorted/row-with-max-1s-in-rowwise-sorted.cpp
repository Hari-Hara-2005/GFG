class Solution {
	public:
	int lowerBound(vector<int>arr, int x)
	{
		int low = 0, high = arr.size() - 1;
		int ans = arr.size();
		while (low <= high)
			{
			int mid = low + (high - low)/2;
			if (arr[mid] >= x)
				{
				ans = mid;
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		return ans;
	}
	int rowWithMax1s(vector<vector<int>> &arr) {
		// code here
		int n = arr.size();
		int m = arr[0].size();
		int cnt = 0, row = -1;
		for (int i = 0; i<n; i++)
			{
			int st = lowerBound(arr[i], 1);
			int sum = m - st;
			if (sum>cnt)
				{
				cnt = sum;
				row = i;
			}
		}
		return row;
	}
};
