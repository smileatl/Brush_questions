//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <numeric>
//
//vector<int> createVector() {
//	vector<int> ivec;
//	int num;
//	do
//	{
//		cin >> num;
//		ivec.push_back(num);
//	} while (getchar() != '\n');
//	return ivec;
//}
//
//void printVector(vector<int>& v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//class Solution {
//public:
//	int candy(vector<int>& ratings) {
//		vector<int> candyNum;
//		int len = ratings.size(); //获取孩子总数
//		//将所有孩子的糖果数初始化为1
//		for (int i = 0; i < len; ++i) {
//			candyNum.push_back(1); 
//		}
//		//先从左往右遍历一遍，如果右边孩子的评分比左边的高，
//		//则右边孩子的糖果数更新为左边孩子的糖果数加 1；
//		for (int i = 1; i < len; ++i) {
//			if (ratings[i] > ratings[i - 1]) {
//				candyNum[i] = candyNum[i - 1] + 1;
//			}
//		}
//		//再从右往左遍历一遍，如果左边孩子的评分比右边的高，
//		//且左边孩子当前的糖果数不大于右边孩子的糖果数，
//		//则左边孩子的糖果数更新为右边孩子的糖果数加 1。
//		for (int i = len - 1; i >= 1; --i) {
//			if (ratings[i - 1] > ratings[i] && candyNum[i-1]<=candyNum[i]) {
//				candyNum[i - 1] = candyNum[i] + 1;
//			}
//		}
//		//计算candyNum容器内糖果的总数
//		int total = accumulate(candyNum.begin(), candyNum.end(), 0);
//		return total;
//	}
//};
//
//int main()
//{
//	vector<int> ratings;
//	ratings = createVector();
//
//	Solution ss;
//	cout << ss.candy(ratings) << endl;
//
//	system("pause");
//	return 0;
//}
//
