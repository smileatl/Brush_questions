//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//	int climbStairs(int n) {
//		if (n <= 2) {
//			return n;
//		}
//		int first = 1, two = 2; //定义两个子问题的解
//		int cur;
//		for (int i = 3; i <= n; ++i) {
//			cur = first + two; //当前问题的解等于两个子问题的解之和
//			first = two;
//			two = cur;
//		}
//		return cur;
//	}
//};
//
//int main()
//{
//	int n = 4;
//
//	Solution ss;
//	cout << ss.climbStairs(n) << endl;
//
//	system("pause");
//	return 0;
//}