//#include <iostream>
//using namespace std;
//#include <vector>
//
//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        int len = nums.size();
//        int ans =INT_MAX;
//        int sum = 0; // 滑动窗口数值之和
//        int l = 0; // 滑动窗口起始位置
//        for (int r = 0; r < len; ++r) {
//            sum += nums[r];
//            // 注意这里使用while，每次更新 l（起始位置），并不断比较子序列是否符合条件
//            while (sum >= target) {
//                int sublength = (r - l + 1); // 取子序列的长度
//                ans = ans < sublength ? ans : sublength;
//                sum -= nums[l++]; // 这里体现出滑动窗口的精髓之处，不断变更l（子序列的起始位置）
//            }
//        }
//        // ans没有被赋值的话，就返回0，说明没有符合条件的子序列
//        return ans == INT_MAX ? 0 : ans;
//    }
//};
//
//int main()
//{
//
//
//    system("pause");
//    return 0;
//}