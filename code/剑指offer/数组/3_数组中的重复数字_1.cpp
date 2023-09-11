//#include <iostream>
//using namespace std;
//#include <vector>
//#include <unordered_map>	
//
////直接查找，暴力求解
//class Solution {
//public:
//	bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
//		for (auto row : matrix) {
//			for (auto n : row) {
//				if (n == target) {
//					return true;
//				}
//			}
//		}
//		return false;
//	}
//};
//
//int main()
//{
//	vector<vector<int>> matrix = { {1,   4,  7, 11, 15},
//		{2,   5,  8, 12, 19},{3,   6,  9, 16, 22},{10, 13, 14, 17, 24},{18, 21, 23, 26, 30} };
//	int target = 5;
//	system("pause");
//	return 0;
//}