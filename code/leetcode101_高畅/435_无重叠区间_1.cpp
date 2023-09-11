//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <numeric>
//
////vector容器嵌套容器的打印
//void printVectorInVector(vector<vector<int>>& v) {
//	//通过大容器，把所有数据遍历一遍
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
//		//(*it) ---- 容器 vector<int>
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//	//每一个小容器输出，输出完了做一个换行的操作
//}
//
////按照谓词（函数对象，仿函数）的方式传入sort进行自定义排序
//class myCompare {
//public:
//	//先把区间按照结尾的大小进行增序排序
//	bool operator()(vector<int>& a, vector<int>& b) {
//		return a[1] < b[1]; //[1]取出区间的结尾
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
//		//sort传入谓词myCompare()，把区间按照结尾的大小进行增序排序
//		sort(intervals.begin(), intervals.end(), myCompare());
//		//prev初始化为第0个区间的结尾
//		int removed = 0, prev = intervals[0][1];
//		for (int i = 1; i < n; ++i) {
//			//如果下一个区间的开头大于上一个区间的结尾，说明有重叠，++removed
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
