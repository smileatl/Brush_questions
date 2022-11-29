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
//class Solution {
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//		//双指针
//		int p1 = 0, p2 = 0;
//		//创建一个新的数组，暂存排好序的数
//		int *sorted=new int[m + n];
//		int cur;
//		while (p1 < m || p2 < n) {
//			if (p1 == m) {
//				cur = nums2[p2++];
//			}
//			else if (p2 == n) {
//				cur = nums1[p1++];
//			}
//			else if (nums1[p1] < nums2[p2]) {
//				cur = nums1[p1++];
//			}
//			else {
//				cur = nums2[p2++];
//			}
//			sorted[p1 + p2 - 1] = cur;
//		}
//		//降排好序的数组赋给nums1
//		for (int i = 0; i < m + n; ++i) {
//			nums1[i] = sorted[i];
//		}
//		delete[] sorted;
//	}
//};
//
//int main()
//{
//	vector<int> nums1, nums2;
//	int m, n;
//	nums1 = createVector();
//	cin >> m;
//	nums2 = createVector();
//	cin >> n;
//
//	Solution ss;
//	ss.merge(nums1, m, nums2, n);
//
//	for (int i = 0; i < m + n; ++i) {
//		cout << nums1[i] << " ";
//	}
//
//
//
//	system("pause");
//	return 0;
//}