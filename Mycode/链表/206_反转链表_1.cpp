//#include <iostream>
//using namespace std;
//
///// <summary>
///// ����ͷ���
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
//		//����currָ����Ԫ���
//		ListNode* curr = head;
//		while (curr) {
//			//����next��ʱ�洢curr������һ���
//			ListNode* next = curr->next;
//			//curr��nextָ����ָ���ϴ�ѭ���洢��prevǰһ���
//			curr->next = prev;
//			//prevָ��ǰ���
//			prev = curr;
//			//currָ����һ���
//			curr = next;
//		}
//		return prev;
//	}
//};
//
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