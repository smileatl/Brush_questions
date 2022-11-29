//#include <iostream>
//using namespace std;
//#include <vector>
//
//
//class Solution {
//public:
//	//(-1,0):left, (0,1):up, (1,0):right, (0,-1):down
//	vector<int> direction{ -1,0,1,0,-1 };
//
//	// 主函数
//	int maxAreaOfIsland(vector<vector<int>>&grid) {
//		if (grid.empty() || grid[0].empty()) return 0;
//		int max_area = 0;
//		for (int i = 0; i < grid.size(); ++i) {
//			for (int j = 0; j < grid[0].size(); ++j) {
//				//如果单元格为1，才进行广度优先搜索
//				if (grid[i][j] == 1) {
//					max_area = max(max_area, dfs(grid, i, j));
//				}
//			}
//		}
//		return max_area;
//	}
//	//辅函数
//	int dfs(vector<vector<int>>& grid, int r, int c) {
//		if (grid[r][c] == 0) return 0;
//		grid[r][c] = 0;
//		int x, y, area = 1;
//		for (int i = 0; i < 4; ++i) {
//			x = r + direction[i], y = c + direction[i + 1];
//			//边界条件判定，合法了才进行下一步搜索
//			if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size()) {
//				area += dfs(grid, x, y);
//			}
//		}
//		return area;
//	}
//};
//
//
//
//int main()
//{
//	vector<vector<int>> grid = { {1,0,1,1,0,1,0,1},
//								 {1,0,1,1,0,1,1,1},
//								 {0,0,0,0,0,0,0,1} };
//	Solution ss;
//	cout << ss.maxAreaOfIsland(grid) << endl;
//
//
//	system("pause");
//	return 0;
//}