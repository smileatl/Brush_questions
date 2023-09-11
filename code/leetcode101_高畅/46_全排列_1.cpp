//#include <iostream>
//using namespace std;
//#include <vector>
//
//void backtracking(vector<int>& nums, int level, vector<vector<int>>& ans) {
//	if (level == nums.size() - 1) {
//		ans.push_back(nums);
//		return;
//	}
//	for (int i = level; i < nums.size(); ++i) {
//		swap(nums[i], nums[level]);
//		backtracking(nums, level + 1, ans);
//		swap(nums[i], nums[level]);
//	}
//}
//
//class Solution {
//public:
//	vector<vector<int>> permute(vector<int>& nums) {
//		vector<vector<int>> ans;
//		backtracking(nums, 0, ans);
//		return ans;
//	}
//};
//
//
//
//int main()
//{
//	vector<int> nums = { 1,2,3 };
//	Solution ss;
//	vector<vector<int>> ans = ss.permute(nums);
//
//	system("pause");
//	return 0;
//}