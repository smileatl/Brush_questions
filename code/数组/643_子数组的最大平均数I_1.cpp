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
//
//class Solution {
//public:
//    double findMaxAverage(vector<int>& nums, int k) {
//        int len = nums.size();
//        double sum = accumulate(nums.begin(), nums.begin() + k, 0);
//        double maxAverage = sum / k;
//        for (int i = k; i < len; ++i) {
//            sum = sum - nums[i - k] + nums[i];
//            double currentAverage = sum / k;
//            maxAverage = max(currentAverage, maxAverage);
//        }
//        return maxAverage;
//    }
//};
//
//int main()
//{
//    vector<int> nums = { 5 };
//    int k = 1;
//
//    Solution ss;
//    cout << ss.findMaxAverage(nums, k) << endl;
//
//    system("pause");
//    return 0;
//}