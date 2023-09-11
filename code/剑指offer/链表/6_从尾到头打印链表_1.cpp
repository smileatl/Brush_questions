//#include <iostream>
//using namespace std;
//#include <vector>
//#include <stack>
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	vector<int> reversePrint(ListNode* head) {
//		ListNode* temp = head;
//		stack<int> s;
//		vector<int> v;
//		while (temp != nullptr) {
//			s.push(temp->val);
//			temp = temp->next;
//		}
//
//		while (!s.empty()) {
//			v.push_back(s.top());
//			s.pop();
//		}
//		return v;
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
//
