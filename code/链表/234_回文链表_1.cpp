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
//	bool isPalindrome(ListNode* head) {
//		vector<int> elem;
//		ListNode* p = head;
//		//������ֵ������
//		while (p) {
//			elem.push_back(p->val);
//			p = p->next;
//		}
//
//		//˫ָ�뷨
//		int low = 0, high = elem.size() - 1;
//		while (low <= high) {
//			//һ��ǰ��ָ��������������Ԫ�ز���ͬ���ͷ���false
//			if (elem[low] != elem[high]) {
//				return false;
//			}
//			//��ͬ�Ļ�ǰ��ָ��ͼ����ƶ�
//			else {
//				++low;
//				--high;
//			}
//		}
//		//����Ⱦͷ���true
//		return true;
//	}
//};
//
////β�巨�����������ĵ�������
//ListNode* createListTail() {
//	ListNode* L= new ListNode;
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
//	ListNode* list = createListTail();
//	printList(list);
//
//	Solution ss;
//	cout << boolalpha << ss.isPalindrome(list) << endl;
//
//	delete list;
//	system("pause");
//	return 0;
//}