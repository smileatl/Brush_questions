//#include <iostream>
//using namespace std;
//#include <vector>
//
//class Solution {
//public:
//	int rob(vector<int>& nums) {
//		int len = nums.size();
//		if (nums.empty()) {
//			return 0;
//		}
//		if (len == 1) {
//			return nums[0];
//		}
//		int first = 0, two = 0;
//		int cur = 0;
//		for (int i = 0; i < len; ++i) {
//			cur = max(two, first + nums[i]);
//			first = two;
//			two = cur;
//		}
//		return cur;
//	}
//};
//
//int main()
//{
//	vector<int> nums = { 1,1 };
//
//	Solution ss;
//	cout << ss.rob(nums) << endl;
//
//	system("pause");
//	return 0;
//}