#include <iostream>
using namespace std;
#include <vector>

class MyLinkedList {
public:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int val) :val(val), next(nullptr) {};
    };

    MyLinkedList() {
        _dummyHead = new ListNode(0);
        _size = 0;

    }

    int get(int index) {
        if (index > (_size - 1) || index < 0) {
            return -1;
        }
        ListNode* cur = _dummyHead->next;
        while (index--) {
            cur = cur->next;
        }
        return cur->val;
    }

    void addAtHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = _dummyHead->next;
        _dummyHead->next = newNode;
        _size++;
    }

    void addAtTail(int val) {
        ListNode* newNode = new ListNode(val);
        ListNode* cur = _dummyHead;
        while (cur->next != nullptr) {
            cur = cur->next;
        }
        cur->next = newNode;
        _size++;
    }

    void addAtIndex(int index, int val) {
        if (index > _size) return;
        if (index < 0) index = 0;
        ListNode* newNode = new ListNode(val);
        ListNode* cur = _dummyHead;
        while (index--) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        _size++;
    }

    void deleteAtIndex(int index) {
        if (index >= _size || index < 0) {
            return;
        }
        ListNode* cur = _dummyHead;
        while (index--) {
            cur = cur->next;
        }
        ListNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        _size--;
    }

private:
    int _size;
    ListNode* _dummyHead;
};



int main()
{
	/*ListNode* list = createListTail();
	printList(list);

	Solution ss;
	cout << boolalpha << ss.isPalindrome(list) << endl;

	delete list;*/
	system("pause");
	return 0;
}