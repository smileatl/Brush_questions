//#include <iostream>
//using namespace std;
//#include <vector>
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
//	vector<int> searchRange(vector<int>& nums, int target) {
//		//找第一个大于等于target的位置
//		int low = 0, high = nums.size() - 1;
//		while (low < high) {
//			int mid = (low + high) / 2;
//			
//			if (target <= nums[mid]) {
//				high = mid;
//			}
//			else {
//				low = mid + 1;
//			}
//		}
//		int lower = low;
//
//		//找第一个大于target的位置减一
//		low = 0, high = nums.size();
//		while (low < high) {
//			int mid = (low + high) / 2;
//			if (nums[mid] > target) {
//				high = mid;
//			}
//			else {
//				low = mid + 1;
//			}
//		}
//		int upper = low - 1;
//		if (nums.empty()) {
//			return vector<int>{-1, -1};
//		}
//		if (lower == nums.size() || nums[lower] != target) {
//			return vector<int>{-1, -1};
//		}
//		return vector<int>{lower, upper};
//	}
//};
//
//
//int main()
//{
//	vector<int> nums;
//	int target;
//	
//	nums = createVector();
//	cin >> target;
//
//	Solution ss;
//	vector<int> pos = ss.searchRange(nums, target);
//	for (int i = 0; i < pos.size(); ++i) {
//		cout << pos[i] << " ";
//	}
//
//	system("pause");
//	return 0;
//}