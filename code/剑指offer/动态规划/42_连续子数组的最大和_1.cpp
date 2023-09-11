//#include <iostream>
//using namespace std;
//#include <vector>
//
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		//初始化最大值为nums第一个数
//		int maxAns = nums[0];
//		for (int i = 1; i < nums.size(); ++i) {
//			nums[i] += max(nums[i - 1], 0);
//			maxAns = max(maxAns, nums[i]);
//		}
//		return maxAns;	
//	}
//};
//
//int main()
//{
//	vector<int> nums
//
//	Solution ss;
//	/*cout << ss.climbStairs(n) << endl;*/
//
//	system("pause");
//	return 0;
//}