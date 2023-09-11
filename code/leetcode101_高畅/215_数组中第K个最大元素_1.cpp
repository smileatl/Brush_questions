//#include <iostream>
//using namespace std;
//#include <vector>
//
////¿ìËÙÅÅĞò
//void quick_sort(vector<int>& nums, int l, int r) {
//	if (l + 1 >= r) {
//		return;
//	}
//	int first = l, last = r - 1, key = nums[first];
//	while (first < last) {
//		while (first < last && nums[last] >= key) {
//			--last;
//		}
//		nums[first] = nums[last];
//		while (first < last && nums[first] <= key) {
//			++first;
//		}
//		nums[last] = nums[first];
//	}
//	nums[first] = key;
//	quick_sort(nums, l, first);
//	quick_sort(nums, first + 1, r);
//}
//
//class Solution {
//public:
//	int findKthLargest(vector<int>& nums, int k) {
//		quick_sort(nums, 0, nums.size());
//		return nums[nums.size() - k];
//	}
//};
//
//
//
//int main()
//{
//
//	vector<int> nums = { 3,2,1,5,6,4 };
//	int k;
//	cin >> k;
//
//	Solution ss;
//	cout << ss.findKthLargest(nums, k) << endl;
//
//
//	system("pause");
//	return 0;
//}