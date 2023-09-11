//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//#include <algorithm>
//
//
//class Solution {
//public:
//    int numIslands(vector<vector<char>>& grid) { 
//        int res = 0;
//        for (int i = 0; i < grid.size(); i++) {
//            for (int j = 0; j < grid[0].size(); j++) {
//                if (grid[i][j] == '1') {
//                    dfs(grid, i, j);
//                    res++;
//                }
//            }
//        }
//        return res;
//    }
//
//    void dfs(vector<vector<char>>& grid, int r, int c) {
//        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size()) {
//            return;
//        }
//
//        if (grid[r][c] != '1') {
//            return;
//        }
//
//        grid[r][c] = '2';
//        dfs(grid, r - 1, c);
//        dfs(grid, r + 1, c);
//        dfs(grid, r, c - 1);
//        dfs(grid, r, c + 1);
//    }
//};
//
//
//int main()
//{
//    
//
//    system("pause");
//    return 0;
//}
