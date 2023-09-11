//#include <iostream>
//using namespace std;
//#include <unordered_set>
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//
//class Solution {
//public:
//	int lengthOfLongestSubstring(string s) {
//		if (s.size() == 0) return 0;
//		unordered_set<char> lookup;
//		int maxStr = 0;
//		int left = 0;
//		for (int i = 0; i < s.size(); i++) {
//			while (lookup.find(s[i]) != lookup.end()) {
//				// �ҵ��ˣ��ƶ����в��Ѷ�����ߵ�Ԫ���Ƴ�
//				lookup.erase(s[left]);
//				left++;
//			}
//			// һֱ�ҳ�������ĳ���
//			maxStr = max(maxStr, i - left + 1);
//			lookup.insert(s[i]);
//		}
//		return maxStr;
//	}
//};
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}