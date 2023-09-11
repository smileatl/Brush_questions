//#include <iostream>
//using namespace std;
//#include <vector>
//
//class Solution {
//public:
//	int countPrimes(int n) {
//		vector<bool> primes(n, true);
//		// ��2��ʼö�ٵ�sqrt(n)
//		for (int i = 2; i * i < n; ++i) {
//			// �����ǰ������
//			if (primes[i]) {
//				// �ͰѴ�i*i��ʼ��i�����б���������Ϊfalse
//				// ��Ϊ���x>2��2*x��2���˵��ˣ�3*x��3���˵��ˣ�...����Сδ�����˵���x^2
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