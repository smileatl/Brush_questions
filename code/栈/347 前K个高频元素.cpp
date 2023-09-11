//#include <iostream>
//using namespace std;
//#include <queue>
//#include <stack>
//#include <string>
//#include <unordered_map>
//
//class Solution {
//public:
//	vector<int> topKFrequent(vector<int>& nums, int k) {
//		unordered_map<int, int> counts;
//		int max_count = 0;
//		//查找最大频次
//		//根据每个数的频次放入unordered_map容器 1:4, 2:2, 3:1, 4:1
//		for (const int& num : nums) {
//			max_count = max(max_count, ++counts[num]);
//		}
//		//按照频次建立4个新桶，4:[3,4], 2:[2], 3:[1], 4:[1]
//		vector<vector<int>> buckets(max_count + 1);
//		for (const auto& p : counts) {
//			buckets[p.second].push_back(p.first);
//		}
//		//从后往前遍历，直到找到k个频次最高的桶
//		vector<int> ans;
//		for (int i = max_count; i >= 0 && ans.size() < k; --i) {
//			for (const int& num : buckets[i]) {
//				ans.push_back(num);
//				if (ans.size() == k) {
//					break;
//				}
//			}
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//	int k = 2;
//	vector<int> nums = { 1,1,1,2,2,3 };
//	Solution ss;
//	ss.topKFrequent(nums, k);
//
//    system("pause");
//    return 0;
//}