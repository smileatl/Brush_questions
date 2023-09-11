#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Solution {
public:
	string convertToBase7(int num) {
		string ans = "";
		if (num == 0) {
			return "0";
		}
		int flag = num < 0 ? 1 : 0;
		if (flag) {
			num = -num;
		}
		while (num) {
			int tmp = num % 7;
			ans = to_string(tmp) + ans;
			num = num / 7;
		}
		return flag ? "-" + ans : ans;
	}
};

int main()
{
	int n = -7;
	Solution ss;
	cout << ss.convertToBase7(n) << endl;

	system("pause");
	return 0;
}