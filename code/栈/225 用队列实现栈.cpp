//#include <iostream>
//using namespace std;
//#include <queue>
//#include <stack>
//
//class MyStack {
//public:
//    queue<int> que;
//
//    MyStack() {
//
//    }
//
//    void push(int x) {
//        que.push(x);
//    }
//
//    int pop() {
//        int size = que.size() - 1;
//        while (size--) {
//            que.push(que.front());
//            que.pop();
//        }
//        int result = que.front();
//        que.pop();
//        return result;
//    }
//
//    int top() {
//        que.back();
//    }
//
//    bool empty() {
//        return que.empty();
//    }
//};
//
//int main()
//{
//
//
//    system("pause");
//    return 0;
//}