//#include <iostream>
//using namespace std;
//
///// <summary>
///// 不带头结点
///// </summary>
//
//
////Definition for singly-linked list.
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//class Solution {
//public:
//	ListNode* removeNthFromEnd(ListNode* head, int n) {
//		ListNode* dummyHead = new ListNode(0);
//		dummyHead->next = head;
//		ListNode* slow = dummyHead;
//		ListNode* fast = dummyHead;
//		for (int i = 0; i < n; i++) {
//			fast = fast->next;
//		}
//		while (fast->next!=NULL) {
//			fast = fast->next;
//			slow = slow->next;	
//		}
//		slow->next = slow->next->next;
//		return dummyHead->next;
//	}
//};
//
////尾插法创建不定长的单向链表
//void createListTail(ListNode* L) {
//	ListNode* r = L;
//	cin >> r->val;
//	do {
//		ListNode* p = new ListNode;
//		cin >> p->val;  //循环创建p，输入结点数据
//		p->next = nullptr;
//		r->next = p;
//		r = p;
//	} while (getchar() != '\n');
//}
//
////输出链表元素
//void printList(ListNode* L) {
//	ListNode* p = L->next;
//	while (p) {
//		cout << p->val << " ";
//		p = p->next;
//	}
//	cout << endl;
//}
//
//int main()
//{
//
//
//
//
//	system("pause");
//	return 0;
//}