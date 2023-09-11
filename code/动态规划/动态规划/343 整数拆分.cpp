//#include <iostream>
//using namespace std;
//#include <vector>
//#include <numeric>
//
//class Solution {
//public:
//	int integerBreak(int n) {
//		vector<int> dp(n + 1);
//		dp[2] = 1;
//		for (int i = 3; i <= n; i++) {
//			for (int j = 1; j <= i / 2; j++) {
//				dp[i] = max(dp[i], max((i - j) * j, dp[i - j] * j));
//			}
//		}
//		return dp[n];
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