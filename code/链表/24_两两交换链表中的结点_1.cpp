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
//	ListNode* swapPairs(ListNode* head) {
//		//�����ƽ��dummyHead����dummyHead.next=head
//		ListNode* dummyHead = new ListNode(0, head);
//		//��temp��ʾ��ǰ����Ľ�㣬��ʼ��ʱtemp=dummyHead
//		ListNode* temp = dummyHead;
//		ListNode* node1;
//		ListNode* node2;
//		//���temp�ĺ���û�н�����ֻ��һ����㣬���������
//		while (temp->next && temp->next->next) { 
//			//node1ָ��temp����һ��㣬node2ָ��temp�����¸����
//			node1 = temp->next;
//			node2 = temp->next->next;
//			//��������
//			//����֮ǰ�Ľڵ��ϵ�� temp -> node1 -> node2��
//			//����֮��Ľڵ��ϵҪ��� temp -> node2 -> node1
//			temp->next = node2;
//			node1->next = node2->next;
//			node2->next = node1;
//			//��temp=node1
//			temp = node1;
//		}
//		return dummyHead->next;
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