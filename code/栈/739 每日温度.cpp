//#include <iostream>
//using namespace std;
//#include <queue>
//#include <stack>
//#include <string>
//#include <unordered_map>
//
//class Solution {
//public:
//	vector<int> dailyTemperatures(vector<int>& temperatures) {
//		stack<int> st;
//		vector<int> result(temperatures.size(), 0);
//		for (int i = 0; i < temperatures.size(); i++) {
//			while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
//				result[st.top()] = i - st.top();
//				st.pop();
//			}
//			st.push(i);
//		}
//	}
//};
//
//int main()
//{
//	
//
//	system("pause");
//	return 0;
//}