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
//			//��ѯ��ϣ�����Ƿ����target-nums[i]
//			auto it = us.find(target - nums[i]);
//			//����ҵ��ˣ�ֱ�ӷ���
//			if (it != us.end()) {
//				return { it->second,i };
//			}
//			//��nums[i]���뵽��ϣ���У����Ա�֤�����Լ�ƥ��
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