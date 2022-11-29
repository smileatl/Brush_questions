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
//	ListNode* swapPairs(ListNode* head) {
//		//创建哑结点dummyHead，令dummyHead.next=head
//		ListNode* dummyHead = new ListNode(0, head);
//		//令temp表示当前到达的结点，初始化时temp=dummyHead
//		ListNode* temp = dummyHead;
//		ListNode* node1;
//		ListNode* node2;
//		//如果temp的后面没有结点或者只有一个结点，则结束交换
//		while (temp->next && temp->next->next) { 
//			//node1指向temp的下一结点，node2指向temp的下下个结点
//			node1 = temp->next;
//			node2 = temp->next->next;
//			//两两交换
//			//交换之前的节点关系是 temp -> node1 -> node2，
//			//交换之后的节点关系要变成 temp -> node2 -> node1
//			temp->next = node2;
//			node1->next = node2->next;
//			node2->next = node1;
//			//令temp=node1
//			temp = node1;
//		}
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