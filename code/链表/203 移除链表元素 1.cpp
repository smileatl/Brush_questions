//#include <iostream>
//using namespace std;
//#include <vector>
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
//	ListNode* removeElements(ListNode* head, int val) {
//		ListNode* dummyHead = new ListNode(0);
//		dummyHead->next = head;
//		ListNode* cur = dummyHead;
//		while (cur->next != NULL) {
//			if (cur->next->val == val) {
//				ListNode* tmp = cur->next;
//				cur->next = cur->next->next;
//				delete tmp;
//			}
//			else {
//				cur = cur->next;
//			}
//		}
//		head = dummyHead->next;
//		delete dummyHead;
//		return head;
//	}
//};
//
////β�巨�����������ĵ�������
//ListNode* createListTail() {
//	ListNode* L = new ListNode;
//	ListNode* r = L;
//	cin >> r->val;
//	do {
//		ListNode* p = new ListNode;
//		cin >> p->val;  //ѭ������p������������
//		p->next = nullptr;
//		r->next = p;
//		r = p;
//	} while (getchar() != '\n');
//	return L;
//}
//
////�������Ԫ��
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
//	/*ListNode* list = createListTail();
//	printList(list);
//
//	Solution ss;
//	cout << boolalpha << ss.isPalindrome(list) << endl;
//
//	delete list;*/
//	system("pause");
//	return 0;
//}