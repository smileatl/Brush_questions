//#include <iostream>
//using namespace std;
//#include <stack>
//#include <algorithm>
//
//
//class MinStack {
//public:
//    MinStack() {
//        min_stack.push(INT_MAX); //min_stack�ȳ�ʼ��һ����������
//    }
//
//    void push(int x) {
//        x_stack.push(x);
//        min_stack.push(min(min_stack.top(), x)); //min_stack��ջ��Ԫ��һֱ����С��
//    }
//
//    void pop() {
//        x_stack.pop();
//        min_stack.pop();
//    }
//
//    int top() {
//        return x_stack.top();
//    }
//
//    int getMin() {
//        return min_stack.top();
//    }
//
//private:
//    stack<int> x_stack;
//    stack<int> min_stack;
//};
//
///**
// * Your MinStack object will be instantiated and called as such:
// * MinStack* obj = new MinStack();
// * obj->push(val);
// * obj->pop();
// * int param_3 = obj->top();
// * int param_4 = obj->getMin();
// */
//
//
//int main()
//{
//    MinStack* obj = new MinStack;
//
//	system("pause");
//	return 0;
//}