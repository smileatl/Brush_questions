//#include <iostream>
//using namespace std;
//#include <vector>
//
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		//��ʼ�����ֵΪnums��һ����
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