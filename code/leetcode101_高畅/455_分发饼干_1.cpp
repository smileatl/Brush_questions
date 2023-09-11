//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
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
//	int findContentChildren(vector<int>& g, vector<int>& s) {
//		sort(g.begin(), g.end()); //排序方便之后的大小比较
//		sort(s.begin(), s.end());
//		int count = 0;
//		int child = 0, cookie = 0;
//		while (child < g.size() && cookie < s.size()) {
//			if (g[child] <= s[cookie]) {
//				++child;
//				++count;
//			}
//			++cookie;
//		}
//		return count;
//	}
//};
//
//
//int main()
//{
//	vector<int> g, s;
//	g = createVector();
//	s = createVector();
//
//	Solution ss;
//	cout << ss.findContentChildren(g, s) << endl;;
//
//	system("pause");
//	return 0;
//}