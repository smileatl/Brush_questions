//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//
//class Solution {
//public:
//	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//		int curSum = 0;
//		int totalSum = 0;
//		int start = 0;
//		for (int i = 0; i < gas.size(); i++) {
//			curSum += gas[i] - cost[i];
//			totalSum += gas[i] - cost[i];
//			if (curSum < 0) {
//				start = i + 1;
//				curSum = 0;
//			}
//		}
//		if (totalSum < 0) return -1;
//		return start;
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