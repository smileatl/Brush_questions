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
//		//判断还是否存在环路
//		do {
//			//如果存在fast为空，或者fast->next为空的情况，
//			//说明fast可以走到尽头，就说明没有环路
//			if (!fast || !fast->next) {
//				return nullptr;
//			}
//			//每次fast前进两步，slow前进一步
//			fast = fast->next->next;
//			slow = slow->next;
//		} while (fast != slow); //如果存在环路，一定存在一个时刻slow和fast相遇
//		//当slow和first第一次相遇时，将fast重新移动到链表开头
//		fast = head;
//		while (fast != slow) { //当slow和fast第二次相遇时，相遇的节点即为环路的开始点
//			//让slow和fast每次都前进一步
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