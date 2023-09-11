//#include <iostream>
//using namespace std;
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//
//class Solution {
//public:
//	int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
//		unordered_map<int, int> um; //key:a+b的数值，value:a+b数值出现的次数
//		int count = 0;
//		// 遍历大A和大B数组，统计两个数组元素之和，和出现的次数，放到um中
//		for (int a : nums1) {
//			for (int b : nums2) {
//				um[a + b]++;
//			}
//		}
//		// 在遍历nums3和nums4数组，找到如果 0-(c+d) 在um中出现过的话，
//		// 就把um中key对应的value也就是出现次数统计出来。
//		for (int c : nums3) {
//			for (int d : nums4) {
//				auto it = um.find(0 - (c + d));
//				if (it != um.end()) {
//					count += um[0 - (c + d)];
//				}
//			}
//		}
//		return count;
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