//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//#include<string>
//
//
//class Solution {
//public:
//
//	vector<vector<int>> result;
//	vector<int> path;
//	void backtracking(vector<int>& candidates, int target, int sum, int startIndex) {
//		if (sum == target) {
//			result.push_back(path);
//			return;
//		}
//
//		for (int i = startIndex; i < candidates.size() && sum + candidates[i] <= target;i++) {
//			if (i > startIndex && candidates[i] == candidates[i - 1]) {
//				continue;
//			}
//
//			sum += candidates[i];
//			path.push_back(candidates[i]);
//			backtracking(candidates, target, sum, i + 1);
//			path.pop_back();
//			sum -= candidates[i];
//		}
//	}
//
//
//	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//		path.clear();
//		result.clear();
//		sort(candidates.begin(), candidates.end());
//		backtracking(candidates, target, 0, 0);
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