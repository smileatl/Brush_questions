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
//		for (int i = 0; i < nums.size(); ++i) {
//			if (nums[i] == target) {
//				return true;
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