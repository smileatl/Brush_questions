//#include <iostream>
//using namespace std;
//#include <vector>
//#include <set>
//#include <algorithm>
//#include <string>
//
//class Solution {
//public:
//	vector<int> constructArr(vector<int>& a) {
//		int len = a.size();
//		if (len == 0) {
//			return {};
//		}
//		//1 初始化数组ans,辅助变量total=1；
//		vector<int> ans(len, 1);
//		int total = 1;
//		//2 计算 B[i] 的 下三角 各元素的乘积，直接乘入 B[i]；
//		for (int i = 1; i < len; ++i) {
//			ans[i] = ans[i-1] * a[i-1];
//		}
//		//3 计算 B[i] 的 上三角 各元素的乘积，记为 tmp，并乘入 B[i]；
//		for (int i = len - 1; i > 0; --i) {
//			total *= a[i];
//			ans[i - 1] *= total;
//		}
//		return ans;
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