class Solution {
	public:
	int binaryToDecimal(string& b) {
		// code here
		int n = b.size();
		int num = 0;
		for (int i = n - 1; i >= 0; i--)
			{
			int k = b[i]-'0';
			int j = n - i-1;
			num += pow(2, j)*k;
		}
		return num;
	}
};
