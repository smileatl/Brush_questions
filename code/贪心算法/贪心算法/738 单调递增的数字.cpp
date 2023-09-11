#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include<string>


class Solution {
public:
	int monotoneIncreasingDigits(int n) {
		string strNum = to_string(n);
		int flag = strNum.size();
		for (int i = strNum.size() - 1; i > 0; i--) {
			if (strNum[i - 1] > strNum[i]) {
				flag = i;
				strNum[i - 1]--;
			}
		}
		for (int i = flag; i < strNum.size(); i++) {
			strNum[i] = '9';
		}
		return stoi(strNum);
	}
};


int main()
{


	system("pause");
	return 0;
}