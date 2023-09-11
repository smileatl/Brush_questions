//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//class Solution {
//public:
//	bool canJump(vector<int>& nums) {
//		int cover = 0;
//		if (nums.size() == 1) return true;
//		for (int i = 0; i <= cover; i++) {
//			cover = max(i + nums[i], cover);
//			if (cover >= nums.size() - 1) {
//				return true;
//			}
//		}
//		return false;
//	}
//};
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}