//#include <iostream>
//using namespace std;
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//
//class Solution {
//public:
//	int getSum(int n) {
//		int sum = 0;
//		while (n) {
//			sum += (n % 10) * (n % 10);
//			n /= 10;
//		}
//		return sum;
//	}
//
//	bool isHappy(int n) {
//		int sum;
//		unordered_set<int> us;
//		while (1) {
//			sum = getSum(n);
//			if (sum == 1) return true;
//			if (us.find(sum) != us.end()) {
//				return false;
//			}
//			else {
//				us.insert(sum);
//			}
//			n = sum;
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