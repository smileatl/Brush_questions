//#include <iostream>
//using namespace std;
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//		unordered_map<int, int> us;
//		for (int i = 0; i < nums.size(); ++i) {
//			//查询哈希表中是否存在target-nums[i]
//			auto it = us.find(target - nums[i]);
//			//如果找到了，直接返回
//			if (it != us.end()) {
//				return { it->second,i };
//			}
//			//将nums[i]插入到哈希表中，可以保证不与自己匹配
//			us[nums[i]] = i;
//		}
//		return {};
//    }
//};
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}