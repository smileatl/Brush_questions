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
//	bool search(vector<int>& nums, int target) {
//		int l = 0, r = nums.size() - 1;
//		while (l <= r) {
//			int mid = l + (r - l) / 2;
//			if (nums[mid] == target) {
//				return true;
//			}
//			if (nums[l] == nums[mid]) {
//				//�޷��ж��ĸ������������
//				++l;
//			}
//			else if (nums[r] == nums[mid]) {
//				//�޷��ж��ĸ������������
//				--r;
//			}
//			else if (nums[mid] < nums[r]) {
//				//�������������
//				if (target > nums[mid] && target <= nums[r]) {
//					l = mid + 1;
//				}
//				else {
//					r = mid - 1;
//				}
//			}
//			else {//�������������
//				if (target >= nums[l] && target < nums[mid]) {
//					r = mid - 1;
//				}
//				else {
//					l = mid + 1;
//				}
//			}
//		}
//		return false;
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
//	cout << boolalpha << ss.search(nums, target) << endl;
//
//	
//
//	system("pause");
//	return 0;
//}