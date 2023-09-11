//#include <iostream>
//using namespace std;
//#include <vector>
//#include <set>
//#include <algorithm>
//
//class Solution {
//public:
//	bool isStraight(vector<int>& nums) {
//		set<int> s;
//		//min和max是函数名
//		//加_其实也表示私有成员变量，类的属性
//		int _min = 14;
//		int _max = 0;
//		for (int i : nums) {
//			if (i == 0) continue;
//			_min = min(_min, i);
//			_max = max(_max, i);
//			if (s.count(i)) return false;
//			s.insert(i);
//		}
//		return _max-_min < 5;
//	}
//};
//
//int main()
//{
//	vector<int> matrix = { 1,2,3,4,5 };
//	Solution ss;
//	ss.isStraight(matrix);
//
//
//	system("pause");
//	return 0;
//}