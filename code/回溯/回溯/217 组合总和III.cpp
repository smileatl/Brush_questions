//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//
//
//class Solution {
//public:
//	vector<vector<int>> result;
//	vector<int> path;
//	void backtracking(int targetSum, int k, int sum, int startIndex) {
//		if (path.size() == k) {
//			if (sum == targetSum) result.push_back(path);
//			return;
// 		}
//
//		for (int i = startIndex; i <= 9; ++i) {
//			sum += i;
//			path.push_back(i);
//			backtracking(targetSum, k, sum, i + 1);
//			path.pop_back();
//			sum -= i;
//		}
//	}
//
//	vector<vector<int>> combinationSum3(int k, int n) {
//		result.clear();
//		path.clear();
//		backtracking(n, k, 0, 1);
//		return result;
//	}
//};
//
//
//int main()
//{
//
//
//
//	system("pause");
//	return 0;
//}