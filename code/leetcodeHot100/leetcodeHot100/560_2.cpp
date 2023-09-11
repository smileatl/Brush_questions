//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//#include <algorithm>
//
//
//class Solution {
//public:
//    int subarraySum(vector<int>& nums, int k) {
//        unordered_map<int, int> mp;
//        mp[0] = 1;
//        int count = 0, pre = 0;
//        for (auto& x : nums) {
//            // 遍历nums数组，求每一项的前缀和
//            pre += x;
//            // 边存边查看mp，如果mp中存在key为[当前前缀和-k],
//            // 说明之前出现过前缀和满足：prefixSum[j]-prefixSum[i-1]=k
//            if (mp[pre-k]>0) {
//                // 将这样前缀和的个数累加给count
//                count += mp[pre - k];
//            }
//            // 统计该前缀和出现的次数，以键值对存入哈希表mp
//            mp[pre]++;
//        }
//        return count;
//    }
//};
//
//
//
//int main()
//{
//
//
//    system("pause");
//    return 0;
//}
