//#include <iostream>
//using namespace std;
//#include <vector>
//
///// <summary>
///// 不带头结点
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
//		//将链表赋值到数组
//		while (p) {
//			elem.push_back(p->val);
//			p = p->next;
//		}
//
//		//双指针法
//		int low = 0, high = elem.size() - 1;
//		while (low <= high) {
//			//一旦前后指针搜索到的数组元素不相同，就返回false
//			if (elem[low] != elem[high]) {
//				return false;
//			}
//			//相同的话前后指针就继续移动
//			else {
//				++low;
//				--high;
//			}
//		}
//		//都相等就返回true
//		return true;
//	}
//};
//
////尾插法创建不定长的单向链表
//ListNode* createListTail() {
//	ListNode* L= new ListNode;
//	ListNode* r = L;
//	cin >> r->val;
//	do {
//		ListNode* p = new ListNode;
//		cin >> p->val;  //循环创建p，输入结点数据
//		p->next = nullptr;
//		r->next = p;
//		r = p;
//	} while (getchar() != '\n');
//	return L;
//}
//
////输出链表元素
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