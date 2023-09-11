//#include <iostream>
//using namespace std;
//#include <unordered_set>
//
//
//class Solution {
//public:
//	int countSubstrings(string s) {
//		vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
//		int result = 0;
//		// 优先遍历行再遍历列
//		for (int i = s.size() - 1; i >= 0; i--) {
//			for (int j = i; j < s.size(); j++) {
//				if (s[i] == s[j]) {
//					if (j - i <= 1) {
//						result++;
//						dp[i][j] = 1;
//					}
//					else if (dp[i + 1][j - 1]) {
//						result++;
//						dp[i][j] = true;
//					}
//				}
//			}
//		}
//		return result;
//	}
//};
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}