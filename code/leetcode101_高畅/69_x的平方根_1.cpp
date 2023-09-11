//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//	int mySqrt(int x) {
//		long low = 1, high = x; //防止int越界，long的取值范围大一点
//		while (low <= high) {
//			long mid = (low + high) / 2;
//			if (mid* mid <= x) {
//				if ((mid + 1) * (mid + 1) > x) {
//					return mid; //此时的mid的平方小于等于x，但是加1后会大于x
//				}
//				
//			}
//			if (mid * mid < x) { 
//				low = mid + 1;
//			}
//			if (mid * mid > x) {
//				high = mid - 1;
//			}
//		}
//		return 0;
//	}
//};
//
//int main()
//{
//	int x;
//	cin >> x;
//
//	Solution ss;
//	cout << ss.mySqrt(x) << endl;
//
//	system("pause");
//	return 0;
//}