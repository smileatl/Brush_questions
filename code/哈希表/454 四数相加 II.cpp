//#include <iostream>
//using namespace std;
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//
//class Solution {
//public:
//	int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
//		unordered_map<int, int> um; //key:a+b����ֵ��value:a+b��ֵ���ֵĴ���
//		int count = 0;
//		// ������A�ʹ�B���飬ͳ����������Ԫ��֮�ͣ��ͳ��ֵĴ������ŵ�um��
//		for (int a : nums1) {
//			for (int b : nums2) {
//				um[a + b]++;
//			}
//		}
//		// �ڱ���nums3��nums4���飬�ҵ���� 0-(c+d) ��um�г��ֹ��Ļ���
//		// �Ͱ�um��key��Ӧ��valueҲ���ǳ��ִ���ͳ�Ƴ�����
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