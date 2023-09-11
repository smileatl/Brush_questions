//#include <iostream>
//using namespace std;
//#include <vector>
//#include <string>
//
////class Solution {
////public:
////	int maxValue(vector<vector<int>>& grid) {
////		int m = grid.size();
////		int n = grid[0].size();
////		vector<vector<int>> dp(m, vector<int>(n, 0));
////		for (int i = 0; i < m; ++i) {
////			for (int j = 0; j < n; ++j) {
////				if (i == 0 && j == 0) {
////					dp[i][j] = grid[i][j];
////				}
////				else if (i == 0) {
////					dp[i][j] = dp[i][j - 1] + grid[i][j];
////				}
////				else if (j == 0) {
////					dp[i][j] = dp[i - 1][j] + grid[i][j];
////				}
////				else {
////					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
////				}
////			}
////		}
////		return dp[m - 1][n - 1];
////	}
////};
//
////牺牲内存，优化一点时间复杂度
////方法：多开一行一列的空间，省略边界条件的判断
//class Solution {
//public:
//	int maxValue(vector<vector<int>>& grid) {
//		int m = grid.size();
//		int n = grid[0].size();
//		vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
//		for (int i = 1; i < m + 1; ++i) {
//			for (int j = 1; j < n + 1; ++j) {
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + grid[i-1][j-1];
//			}
//		}
//		return dp[m][n];
//	}
//};
//
//
//int main()
//{
//	vector<vector<int>> grid = { {1,2},{1,2} };
//	Solution ss;
//	cout << ss.maxValue(grid);
//
//	system("pause");
//	return 0;
//}