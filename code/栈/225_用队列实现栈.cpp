//#include <iostream>
//using namespace std;
//#include <queue>
//
//class MyStack {
//public:
//    MyStack() {
//
//    }
//
//    void push(int x) {
//        //q2���ڸ���
//        //queue�����Ƕ��У��Ƚ��ȳ�
//        //ͨ�����ַ�ʽ�������Ԫ���ŵ���ͷ
//        q2.push(x);
//        while (!q1.empty()) {
//            q2.push(q1.front());
//            q1.pop();
//        }
//        swap(q1, q2);
//    }
//
//    int pop() {
//        int r = q1.front();
//        //pop�Ƕ�ͷ��Ԫ��
//        q1.pop();
//        return r;
//    }
//
//    int top() {
//        int r = q1.front();
//        return r;
//    }
//
//    bool empty() {
//        return q1.empty();
//    }
//private:
//    queue<int> q1;
//    queue<int> q2;
//};
//
///**
// * Your MyStack object will be instantiated and called as such:
// * MyStack* obj = new MyStack();
// * obj->push(x);
// * int param_2 = obj->pop();
// * int param_3 = obj->top();
// * bool param_4 = obj->empty();
// */
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}