//#include <iostream>
//using namespace std;
//
///// <summary>
///// ����ͷ���
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
//	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//		ListNode* curA = headA;
//		ListNode* curB = headB;
//		int lenA = getLength(headA);
//		int lenB = getLength(headB);
//		if (lenA > lenB) { //����A����������A������
//			for (int i = 0; i < lenA - lenB; i++) {
//				curA = curA->next;
//			}
//		}
//		else if (lenA < lenB) { //����B����������B�����Ƶ�ͬһ���
//			for (int i = 0; i < lenB - lenA; i++) {
//				curB = curB->next;
//			}
//		}
//		else { ; }
//
//		for (int i = 0; i < lenB; i++) {
//			if (curA == curB) return curA;
//			curA = curA->next;
//			curB = curB->next;
//		}
//		return nullptr;
//	}
//
//	int getLength(ListNode* head) {
//		ListNode* p = head;
//		int len = 0;
//		while (p != NULL) {
//			++len;
//			p = p->next;
//		}
//		return len;
//	}
//};
//
////β�巨�����������ĵ�������
//void createListTail(ListNode* L) {
//	ListNode* r = L;
//	cin >> r->val;
//	do {
//		ListNode* p = new ListNode;
//		cin >> p->val;  //ѭ������p������������
//		p->next = nullptr;
//		r->next = p;
//		r = p;
//	} while (getchar() != '\n');
//}
//
////�������Ԫ��
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