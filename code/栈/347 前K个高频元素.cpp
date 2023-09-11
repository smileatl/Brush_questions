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
//		//�������Ƶ��
//		//����ÿ������Ƶ�η���unordered_map���� 1:4, 2:2, 3:1, 4:1
//		for (const int& num : nums) {
//			max_count = max(max_count, ++counts[num]);
//		}
//		//����Ƶ�ν���4����Ͱ��4:[3,4], 2:[2], 3:[1], 4:[1]
//		vector<vector<int>> buckets(max_count + 1);
//		for (const auto& p : counts) {
//			buckets[p.second].push_back(p.first);
//		}
//		//�Ӻ���ǰ������ֱ���ҵ�k��Ƶ����ߵ�Ͱ
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