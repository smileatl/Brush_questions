//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//#include<string>
//
//
//class Solution {
//public:
//	const string letterMap[10] = {
//		"",
//		"",
//		"abc",
//		"def",
//		"ghi",
//		"jkl",
//		"mno",
//		"pqrs",
//		"tuv",
//		"wxyz"
//	};
//
//	string s;
//	vector<string> result;
//	void backtracking(const string& digits, int index) {
//		if (index == digits.size()) {
//			result.push_back(s);
//			return;
//		}
//
//		int digit = digits[index] - '0';
//		string letters = letterMap[digit];
//		for (int i = 0; i < letters.size(); ++i) {
//			s.push_back(letters[i]);
//			backtracking(digits, index + 1);
//			s.pop_back();
//		}
//	}
//
//	vector<string> letterCombinations(string digits) {
//		s.clear();
//		result.clear();
//		if (digits.size() == 0) return result;
//		backtracking(digits, 0);
//		return result;
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