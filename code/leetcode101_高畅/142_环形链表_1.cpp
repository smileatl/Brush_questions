//#include <iostream>
//using namespace std;
//
//
////Definition for singly-linked list.
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* detectCycle(ListNode* head) {
//		ListNode* slow = head, * fast = head;
//		//�жϻ��Ƿ���ڻ�·
//		do {
//			//�������fastΪ�գ�����fast->nextΪ�յ������
//			//˵��fast�����ߵ���ͷ����˵��û�л�·
//			if (!fast || !fast->next) {
//				return nullptr;
//			}
//			//ÿ��fastǰ��������slowǰ��һ��
//			fast = fast->next->next;
//			slow = slow->next;
//		} while (fast != slow); //������ڻ�·��һ������һ��ʱ��slow��fast����
//		//��slow��first��һ������ʱ����fast�����ƶ�������ͷ
//		fast = head;
//		while (fast != slow) { //��slow��fast�ڶ�������ʱ�������Ľڵ㼴Ϊ��·�Ŀ�ʼ��
//			//��slow��fastÿ�ζ�ǰ��һ��
//			slow = slow->next;
//			fast = fast->next;
//		}
//		return fast;
//	}
//};
//
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}