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
//
//class Solution {
//public:
//	// ��A�ĳ���Ϊa+c��B�ĳ���Ϊb+c������cΪA��B�Ĺ������֣�
//	// ƴ��AB��BA��A+B=a+c+b+c B+A=b+c+a+c������a+c+b=b+c+a����˶��߱ض���c����ʼ�㴦����
//	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//		ListNode* curA = headA, * curB = headB;
//		while (curA != curB) {
//			// ÿ���жϵ�ǰ���Ƿ�Ϊ�յĺô��ǣ�����A B�޹������֣�
//			// ������A+B��B+A�󣬻���nullptr������
//			curA = curA ? curA->next : headB;
//			curB = curB ? curB->next : headA;
//		}
//		return curA;
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