//#include <iostream>
//using namespace std;
//
///// <summary>
///// 不带头结点
///// </summary>
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
//	ListNode* reverseList(ListNode* head) {
//		ListNode* prev = nullptr;
//		//首先curr指向首元结点
//		ListNode* curr = head;
//		while (curr) {
//			//利用next暂时存储curr结点的下一结点
//			ListNode* next = curr->next;
//			//curr的next指针域指向上次循环存储的prev前一结点
//			curr->next = prev;
//			//prev指向当前结点
//			prev = curr;
//			//curr指向下一结点
//			curr = next;
//		}
//		return prev;
//	}
//};
//
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
//	ListNode* p = L;
//	while (p) {
//		cout << p->val << " ";
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
//
//	Solution s;
//	printList(s.reverseList(list1));
//
//	delete list1;
//
//	system("pause");
//	return 0;
//}