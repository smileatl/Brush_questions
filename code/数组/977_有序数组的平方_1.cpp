//#include <iostream>
//using namespace std;
//#include <vector>
//
//class Solution {
//public:
//    vector<int> sortedSquares(vector<int>& nums) {
//        int m = nums.size() - 1;
//        vector<int> ans(nums.size(), 0);
//        int i = 0;
//        int j = nums.size() - 1;
//        while (i <= j) {
//            if (nums[i] * nums[i] < nums[j] * nums[j]) {
//                ans[m--] = nums[j] * nums[j];
//                --j;
//            }
//            else {
//                ans[m--] = nums[i] * nums[i];
//                ++i;
//            }
//        }
//        return ans;
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