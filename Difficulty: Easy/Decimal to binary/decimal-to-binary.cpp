class Solution {
	public:
	string decToBinary(int n) {
		// code here
		string res = "";
		while (n != 0)
			{
			if (n%2 == 1)res = '1' + res;
			else {
				res = '0' + res;
			}
			n = n/2;
		}
		return res;
	}
};
