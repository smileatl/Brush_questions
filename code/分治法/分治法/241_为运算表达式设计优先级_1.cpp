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
//				//1���ֽ⣺�����������������������Ľ����
//				//2�������diffWaysTocompute�ݹ麯�����������Ľ�
//				vector<int> left = diffWaysToCompute(expression.substr(0, i));
//				vector<int> right = diffWaysToCompute(expression.substr(i + 1));
//				//3���ϲ�������������ϲ�������Ľ�
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