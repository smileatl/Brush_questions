//#include <iostream>
//using namespace std;
//#include <vector>
//#include <numeric>
//
//class Solution {
//public:
//	int numberOfArithmeticSlices(vector<int>& nums) {
//		int n = nums.size();
//		if (n < 3) {
//			return 0;
//		}
//		vector<int> dp(n, 0);
//		//从第3个数开始研究
//		for (int i = 2; i < n; ++i) {
//			if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]) {
//				dp[i] = dp[i - 1] + 1;
//			}
//		}
//		return accumulate(dp.begin(), dp.end(), 0);
//	}
//};
//
//int main()
//{
//	vector<int> nums = { 1,1 };
//
//	/*Solution ss;
//	cout << ss.rob(nums) << endl;*/
//
//	system("pause");
//	return 0;
//}