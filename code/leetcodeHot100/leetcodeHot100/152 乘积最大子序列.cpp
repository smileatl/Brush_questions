//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//#include <algorithm>
//
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//
//class Solution {
//public:
//    int maxProduct(vector<int>& nums) {
//        int resMax=INT_MIN, imax = 1, imin = 1;
//        for (int i = 0; i < nums.size(); i++) {
//            if (nums[i] < 0) {
//                int tmp = imax;
//                imax = imin;
//                imin = tmp;
//            }
//
//            imax = max(imax * nums[i], nums[i]);
//            imin = min(imin * nums[i], nums[i]);
//            resMax = max(resMax, imax);
//        }
//        return resMax;
//    }
//};
//
//
//int main()
//{
//    vector<int> nums = { -2,0,1};
//
//    Solution ss;
//    ss.maxProduct(nums);
//
//    system("pause");
//    return 0;
//}
