//#include <iostream>
//using namespace std;
//#include <vector>
//#include <numeric>
//
//class Solution {
//public:
//	int climbStairs(int n) {
//		if (n <= 1) return n;
//		vector<int> dp(n + 1);
//		dp[1] = 1;
//		dp[2] = 2;
//		for (int i = 3; i <= n; i++) {
//			int sum = dp[1] + dp[2];
//			dp[1] = dp[2];
//			dp[2] = sum;
//		}
//		return dp[2];
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