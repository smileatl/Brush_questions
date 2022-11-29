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
//
//class Solution {
//public:
//	// 设A的长度为a+c，B的长度为b+c；其中c为A、B的公共部分；
//	// 拼接AB、BA：A+B=a+c+b+c B+A=b+c+a+c；由于a+c+b=b+c+a，因此二者必定在c的起始点处相遇
//	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//		ListNode* curA = headA, * curB = headB;
//		while (curA != curB) {
//			// 每次判断当前点是否为空的好处是：避免A B无公共部分，
//			// 再走完A+B和B+A后，会在nullptr处相遇
//			curA = curA ? curA->next : headB;
//			curB = curB ? curB->next : headA;
//		}
//		return curA;
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