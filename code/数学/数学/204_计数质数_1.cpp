//#include <iostream>
//using namespace std;
//#include <vector>
//
//class Solution {
//public:
//	int countPrimes(int n) {
//		vector<bool> primes(n, true);
//		// 从2开始枚举到sqrt(n)
//		for (int i = 2; i * i < n; ++i) {
//			// 如果当前是质数
//			if (primes[i]) {
//				// 就把从i*i开始，i的所有倍数都设置为false
//				// 因为如果x>2，2*x被2过滤掉了，3*x被3过滤掉了，...，最小未被过滤的是x^2
//				for (int j = i * i; j < n; j += i) {
//					primes[j] = false;
//				}
//			}
//		}
//		int count = 0;
//		for (int i = 2; i < n; ++i) {
//			if (primes[i]) {
//				++count;
//			}
//		}
//		return count;
//	}
//};
//
//int main()
//{
//	int n = 7;
//	Solution ss;
//	cout << ss.countPrimes(n) << endl;
//
//	system("pause");
//	return 0;
//}