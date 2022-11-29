//#include <iostream>
//using namespace std;
//
///// <summary>
///// 带头结点
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
//	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//		ListNode* p1 = list1->next; //指向list1的首元结点
//		ListNode* p2 = list2->next; //指向list2的首元结点  
//		ListNode* list3 = list1;
//		ListNode* p3 = list3; //指向头结点
//		while (p1 && p2) {
//			if (p1->val <= p2->val) {
//				p3->next = p1; //从首元结点开始，而不是从头结点开始
//				p3 = p3->next;
//				p1 = p1->next;
//			}
//			else {
//				p3->next = p2;
//				p3 = p3->next;
//				p2 = p2->next;
//			}
//		}
//		//while循环执行完毕后，较长的链表还有余留一段元素，这段元素的起止地址就是pa或pb
//		p3->next = (p1 ? p1 : p2);
//		return list3;
//	}
//};
//
////尾插法创建不定长的单向链表
//void createListTail(ListNode* L) {
//	ListNode* r = L;
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
//		cout << p->val<<" ";
//		p = p->next;
//	}
//	cout << endl;
//}
//
//int main()
//{	
//	ListNode* list1 = new ListNode;
//	createListTail(list1);
//	printList(list1);
//	ListNode* list2 = new ListNode;
//	createListTail(list2);
//	printList(list2);
//
//	Solution s;
//	ListNode* list3 = s.mergeTwoLists(list1, list2);
//	printList(list3);
//
//	
//	delete list2;
//	delete list1;
//	system("pause");
//	return 0;
//}