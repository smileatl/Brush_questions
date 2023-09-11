//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//#include <algorithm>
//
//
//class Solution {
//public:
//    int longestConsecutive(vector<int>& nums) {
//        unordered_set<int> uset;
//        for (auto num : nums) {
//            uset.insert(num);
//        }
//
//        int longestStreak = 0;
//
//        for(auto num:uset){
//            if (!uset.count(num - 1)) {
//                int currentNum = num;
//                int currentStreak = 1;
//
//                while (uset.count(currentNum + 1)) {
//                    currentNum += 1;
//                    currentStreak += 1;
//                }
//                longestStreak = max(currentStreak, longestStreak);
//            }
//        }
//        return longestStreak;
//    }
//};
//
//
//int main()
//{
//    system("pause");
//    return 0;
//}
