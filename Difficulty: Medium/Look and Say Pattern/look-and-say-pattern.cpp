class Solution {
	public:
	string countAndSay(int n) {
		// code here
		if (n == 1)return "1";
		string str = countAndSay(n - 1);
		string res = "";
		int i = 0, j = 0;
		while (j<str.size())
			{
			if (str[i] == str[j])
				{
				j++;
			}
			else {
				res += to_string(j - i);
				res += str[i];
				i = j;
			}
		}
		res += to_string(j - i);
		res += str[i];
		return res;
	}
};
