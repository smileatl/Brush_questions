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
//				// 找到了，移动队列并把队列左边的元素移出
//				lookup.erase(s[left]);
//				left++;
//			}
//			// 一直找出队列最长的长度
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