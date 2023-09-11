//#include <iostream>
//using namespace std;
//#include <vector>
//#include <stack>
//#include <unordered_set>
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	ListNode* getKthFromEnd(ListNode* head, int k) {
//		ListNode* former = head, * latter = head;
//		for (int i = 1; i <= k; ++i) {
//			latter = latter->next;
//		}
//
//		while (latter != nullptr) {
//			latter = latter->next;
//			former = former->next;
//		}
//		return former;
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