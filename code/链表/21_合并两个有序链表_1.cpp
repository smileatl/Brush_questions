//#include <iostream>
//using namespace std;
//
///// <summary>
///// ��ͷ���
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
//		ListNode* p1 = list1->next; //ָ��list1����Ԫ���
//		ListNode* p2 = list2->next; //ָ��list2����Ԫ���  
//		ListNode* list3 = list1;
//		ListNode* p3 = list3; //ָ��ͷ���
//		while (p1 && p2) {
//			if (p1->val <= p2->val) {
//				p3->next = p1; //����Ԫ��㿪ʼ�������Ǵ�ͷ��㿪ʼ
//				p3 = p3->next;
//				p1 = p1->next;
//			}
//			else {
//				p3->next = p2;
//				p3 = p3->next;
//				p2 = p2->next;
//			}
//		}
//		//whileѭ��ִ����Ϻ󣬽ϳ�������������һ��Ԫ�أ����Ԫ�ص���ֹ��ַ����pa��pb
//		p3->next = (p1 ? p1 : p2);
//		return list3;
//	}
//};
//
////β�巨�����������ĵ�������
//void createListTail(ListNode* L) {
//	ListNode* r = L;
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