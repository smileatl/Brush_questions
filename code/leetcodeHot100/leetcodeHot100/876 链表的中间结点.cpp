//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//#include <algorithm>
//
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//
//class Solution {
//public:
//    ListNode* middleNode(ListNode* head) {
//        if (head == nullptr) {
//            return nullptr;
//        }
//
//        ListNode* slow = head;
//        ListNode* fast = head;
//
//        while (fast && fast->next) {
//            slow = slow->next;
//            fast = fast->next->next;
//        }
//        return slow;
//    }
//};
//
//
//int main()
//{
//    system("pause");
//    return 0;
//}
