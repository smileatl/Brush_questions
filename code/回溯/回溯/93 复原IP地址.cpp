//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//#include<string>
//
//
//class Solution {
//public:
//	vector<string> result;
//	void backtracking(string& s, int startIndex, int pointNum) {
//		if (pointNum == 3) {
//			if (isValid(s, startIndex, s.size() - 1)) {
//				result.push_back(s);
//			}
//			return;
//		}
//
//		for (int i = startIndex; i < s.size(); i++) {
//
//		}
//	}
//
//
//	bool isValid(const string& s, int start, int end) {
//		if (start > end) {
//			return false;
//		}
//		if (s[start] == '0' && start != end) {
//			return false;
//		}
//		int num = 0;
//		for (int i = start; i <= end; i++) {
//			if (s[i] > '9' || s[i] < '0') {
//				return false;
//			}
//			num = num * 10 + (s[i] - '0');
//			if (num > 255) {
//				return false;
//			}
//		}
//		return true;
//	}
//
//	vector<string> restoreIpAddresses(string s) {
//
//	}
//};
//
//
//int main()
//{
//
//
//
//	system("pause");
//	return 0;
//}