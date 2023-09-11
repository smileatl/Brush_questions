//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//#include<string>
//
//
//class Solution {
//public:
//	vector<vector<int>> result;
//	vector<int> path;
//	void backtracking(vector<int>& nums, int startIndex) {
//		if (path.size() > 1) {
//			result.push_back(path);
//		}
//
//		int used[201] = { 0 };
//		for (int i = startIndex; i < nums.size(); i++) {
//			if ((!path.empty() && nums[i] < path.back()) || used[nums[i] + 100] == 1) {
//				continue;
//			}
//
//			used[nums[i] + 100] = 1;
//			path.push_back(nums[i]);
//			backtracking(nums, i + 1);
//			path.pop_back();
//		}
//	}
//
//
//	vector<vector<int>> findSubsequences(vector<int>& nums) {
//		backtracking(nums, 0);
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