//#include <iostream>
//using namespace std;
//#include <vector>
//#include <string>
//
//class Solution {
//public:
//	vector<int> diffWaysToCompute(string expression) {
//		int n = expression.length();
//		vector<int> ways;
//		for (int i = 0; i < n; ++i) {
//			char c = expression[i];
//			if (c == '+' || c == '-' || c == '*') {
//				//1、分解：遇到运算符，计算左右两侧的结果集
//				//2、解决：diffWaysTocompute递归函数求出子问题的解
//				vector<int> left = diffWaysToCompute(expression.substr(0, i));
//				vector<int> right = diffWaysToCompute(expression.substr(i + 1));
//				//3、合并：根据运算符合并子问题的解
//				for (int l : left) {
//					for (int r : right) {
//						switch (c) {
//						case '-':ways.push_back(l - r); break;
//						case '+':ways.push_back(l + r); break;
//						case '*':ways.push_back(l * r); break;
//						}
//					}
//				}
//			}
//
//		}
//		if (ways.empty()) {
//			ways.push_back(stoi(expression));
//		}
//		return ways;
//	}
//};
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}