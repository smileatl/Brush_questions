//#include <iostream>
//using namespace std;
//#include <vector>
//#include <string>
//
//class Solution {
//public:
//	int translateNum(int num) {
//		int a = 1, b = 1;
//		int c = 1;
//		int x, y = num % 10;
//		while (num != 0) {
//			num /= 10;
//			x = num % 10;
//			int tmp = 10 * x + y;
//			c = (tmp >= 10 && tmp <= 25) ? a + b : b;
//			a = b;
//			b = c;
//			y = x;
//		}
//		return c;
//	}
//};
//
//int main()
//{
//	
//
//
//	system("pause");
//	return 0;
//}