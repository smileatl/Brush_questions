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
//		//1 ��ʼ������ans,��������total=1��
//		vector<int> ans(len, 1);
//		int total = 1;
//		//2 ���� B[i] �� ������ ��Ԫ�صĳ˻���ֱ�ӳ��� B[i]��
//		for (int i = 1; i < len; ++i) {
//			ans[i] = ans[i-1] * a[i-1];
//		}
//		//3 ���� B[i] �� ������ ��Ԫ�صĳ˻�����Ϊ tmp�������� B[i]��
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