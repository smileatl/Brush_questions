#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <unordered_set>

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* deleteNode(ListNode* head, int val) {
		if (head->val == val) {
			return head->next;
		}
		ListNode* cur = head, * pre = head;
		while (cur->next != nullptr && cur->val != val) {
			pre = cur;
			cur = cur->next;
		}
		if (cur != nullptr) {
			pre->next = cur->next;
		}
		return head;
	}
};


int main()
{


	system("pause");
	return 0;
}