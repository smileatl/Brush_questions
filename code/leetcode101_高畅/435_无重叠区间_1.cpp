//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <numeric>
//
////vector����Ƕ�������Ĵ�ӡ
//void printVectorInVector(vector<vector<int>>& v) {
//	//ͨ�������������������ݱ���һ��
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
//		//(*it) ---- ���� vector<int>
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//	//ÿһ��С������������������һ�����еĲ���
//}
//
////����ν�ʣ��������󣬷º������ķ�ʽ����sort�����Զ�������
//class myCompare {
//public:
//	//�Ȱ����䰴�ս�β�Ĵ�С������������
//	bool operator()(vector<int>& a, vector<int>& b) {
//		return a[1] < b[1]; //[1]ȡ������Ľ�β
//	}
//};
//
//class Solution {
//public:
//	int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//		if (intervals.empty()) {
//			return 0;
//		}
//		int n = intervals.size();
//		//sort����ν��myCompare()�������䰴�ս�β�Ĵ�С������������
//		sort(intervals.begin(), intervals.end(), myCompare());
//		//prev��ʼ��Ϊ��0������Ľ�β
//		int removed = 0, prev = intervals[0][1];
//		for (int i = 1; i < n; ++i) {
//			//�����һ������Ŀ�ͷ������һ������Ľ�β��˵�����ص���++removed
//			if (intervals[i][0] < prev) {
//				++removed;
//			}
//			else {
//				prev = intervals[i][1];
//			}
//		}
//		return removed;
//	}
//};
//
//int main()
//{
//	vector<vector<int>> intervals = { {1, 2},{2, 3},{3, 4},{1, 3} };
//	printVectorInVector(intervals);
//
//	Solution ss;
//	cout << ss.eraseOverlapIntervals(intervals) << endl;
//
//	system("pause");
//	return 0;
//}
//
