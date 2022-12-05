//#include <iostream>
//using namespace std;
//#include <vector>
//#include <stack>
//#include <unordered_set>
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* detectCycle(ListNode* head) {
//		unordered_set<ListNode*> uset;
//		ListNode* cur = head;
//		while (cur != nullptr) {
//			if (uset.count(cur)) {
//				return cur;
//			}
//			uset.insert(cur);
//			cur = cur->next;
//		}
//		return nullptr;
//	}
//};
//
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}