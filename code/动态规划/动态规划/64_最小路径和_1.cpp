//#include <iostream>
//using namespace std;
//#include <vector>
//#include <numeric>
//
//class Solution {
//public:
//	int minPathSum(vector<vector<int>>& grid) {
//		int m = grid.size();
//		int n = grid[0].size();
//		vector<vector<int>> dp(m, vector<int>(n, 0));
//		for (int i = 0; i < m; ++i) {
//			for (int j = 0; j < n; ++j) {
//				if (i == 0 && j == 0) {
//					dp[i][j] = grid[i][j];
//				}
//				else if (i == 0) {
//					dp[i][j] = dp[i][j - 1] + grid[i][j];
//				}
//				else if (j == 0) {
//					dp[i][j] = dp[i - 1][j] + grid[i][j];
//				}
//				else {
//					dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
//				}
//			}
//		}
//		return dp[m - 1][n - 1];
//	}
//};
//
//int main()
//{
//	vector<vector<int>> nums = { { 1,1 },{ 1,1 },{ 1,1 } };
//
//	/*Solution ss;
//	cout << ss.rob(nums) << endl;*/
//
//	system("pause");
//	return 0;
//}