//#include <iostream>
//using namespace std;
//#include <vector>
//#include <stack>
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		ListNode* curr = head;
//		ListNode* prev = nullptr;
//
//		while (curr) {
//			ListNode* temp = curr->next;
//			curr->next = prev;
//			prev = curr;
//			curr = temp;
//		}
//		return prev;
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