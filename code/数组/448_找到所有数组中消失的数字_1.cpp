//#include <iostream>
//using namespace std;
//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <numeric>
//#include <functional>
//#include <set>
//#include <float.h>
//
//
//class Solution {
//public:
//    vector<int> findDisappearedNumbers(vector<int>& nums) {
//        vector<int> ans;
//        for (auto num : nums) {
//            int pos = abs(num) - 1;
//            if (nums[pos] > 0) {
//                nums[pos] = -nums[pos];
//            }
//        }
//        for (int i = 0; i < nums.size(); ++i) {
//            if (nums[i] > 0) {
//                ans.push_back(i + 1);
//            }
//        }
//        return ans;
//    }
//};
//
//vector<int> createVector() {
//    vector<int> nums;
//    int tmp;
//    while (cin >> tmp) {
//        nums.push_back(tmp);
//        if (cin.get() == '\n') break;
//    }
//    return nums;
//}
//
//void printVector(vector<int>& v) {
//    for (int i = 0; i < v.size(); ++i) {
//        cout << v[i] << " ";
//    }
//    cout << endl;
//}
//
//int main()
//{
//    vector<int> nums = { 4,3,2,7,8,2,3,1 };
//    int k = 1;
//
//    Solution ss;
//    ss.findDisappearedNumbers(nums);
//    
//
//    system("pause");
//    return 0;
//}