//#include <iostream>
//using namespace std;
//#include <vector>
//#include <numeric>
//
//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        int sum = 0;
//        for (int i = 0; i < nums.size(); i++) sum += nums[i];
//        if (abs(target) > sum) return 0;
//        if ((target + sum) % 2 == 1) return 0;
//        int bagsize = (target + sum) / 2;
//        vector<int> dp(bagsize + 1);
//        dp[0] = 1;
//        for (int i = 0; i < nums.size(); i++) {
//            for (int j = bagsize; j >= nums[i]; j--) {
//                dp[j] += dp[j - nums[i]];
//            }
//        }
//        return dp[bagsize];
//    }
//};
//
//int main()
//{
//
//
//
//    system("pause");
//    return 0;
//}