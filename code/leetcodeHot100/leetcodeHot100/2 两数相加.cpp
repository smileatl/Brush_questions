//#include <iostream>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
// 
//
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		// �����ؽ��Ϊͷ���ʱ���ȳ�ʼ��һ��Ԥ��ָ��pre����ָ�����һ���ڵ�
//		// ָ��������ͷ���
//		ListNode* dummy = new ListNode();
//		ListNode* pre = dummy;
//		int carry = 0;
//		while (l1 || l2 || carry) {
//			if (l1) {
//				carry += l1->val;
//				l1 = l1->next;
//			}
//			if (l2) {
//				carry += l2->val;
//				l2 = l2->next;
//			}
//			ListNode* tmp = new ListNode(carry % 10);
//			pre->next = tmp;
//			pre = pre->next;
//			carry /= 10;
//		}
//		return dummy->next;
//	}
//};
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}