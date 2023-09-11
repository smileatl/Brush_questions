//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//#include <algorithm>
//
//
//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int n = nums.size();
//        int ptr = 0;
//        for (int i = 0; i < n; i++) {
//            if (nums[i] == 0) {
//                swap(nums[i], nums[ptr]);
//                ++ptr;
//            }
//        }
//
//        for (int i = ptr; i < n; i++) {
//            if (nums[i] == 1) {
//                swap(nums[i], nums[ptr]);
//                ++ptr;
//            }
//        }
//    }
//};
//
//
//int main()
//{
//    system("pause");
//    return 0;
//}
