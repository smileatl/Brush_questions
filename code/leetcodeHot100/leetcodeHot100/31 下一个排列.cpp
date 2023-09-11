//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//
//
//class Solution {
//public:
//    void nextPermutation(vector<int>& nums) {
//        if (nums.size() <= 1) return;
//        int i = nums.size() - 2, j = nums.size() - 1, k = nums.size() - 1;
//        while (i >= 0 && nums[i] >= nums[j]) {
//            i--;
//            j--;
//        }
//
//        if (i >= 0) {
//            while (k>=j && nums[i] >= nums[k]) {
//                k--;
//            }
//            swap(nums[i], nums[k]);
//        }
//        reverse(nums.begin() + j, nums.end());
//    }
//};
//
//
//int main()
//{
//    system("pause");
//    return 0;
//}
