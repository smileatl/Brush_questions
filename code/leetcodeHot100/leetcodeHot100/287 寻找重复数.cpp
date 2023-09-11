//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//#include <algorithm>
//#include <stack>
//
//
//class Solution {
//public:
//    int findDuplicate(vector<int>& nums) {
//        int slow = 0;
//        int fast = 0;
//        slow = nums[slow];
//        fast = nums[nums[fast]];
//        while (slow != fast) {
//            slow = nums[slow];
//            fast = nums[nums[fast]];
//        }
//
//        int pre1 = 0;
//        int pre2 = slow;
//        while (pre1 != pre2) {
//            pre1 = nums[pre1];
//            pre2 = nums[pre2];
//        }
//        return pre1;
//    }
//};
//
//
//int main()
//{
//    vector<int> num = { 3,1,3,4,2 };
//    Solution ss;
//    ss.findDuplicate(num);
//
//
//    system("pause");
//    return 0;
//}
