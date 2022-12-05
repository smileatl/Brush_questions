//#include <iostream>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(nullptr) {}
//};
//
//class Solution {
//public:
//    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//		ListNode* curA = headA;
//		ListNode* curB = headB;
//		while (curA != curB) {
//			curA = curA ? curA->next : headB;
//			curB = curB ? curB->next : headA;
//		}
//		return curA;
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