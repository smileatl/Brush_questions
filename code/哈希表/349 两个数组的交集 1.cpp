//#include <iostream>
//using namespace std;
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//
//class Solution {
//public:
//	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//		unordered_set<int> result;
//		unordered_set<int> tmp(nums1.begin(), nums1.end());
//		for(int num:nums2){
//			if (tmp.find(num) != tmp.end()) {
//				result.insert(num);
//			}
//		}
//		return vector<int>(result.begin(), result.end());
//	}
//};
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}