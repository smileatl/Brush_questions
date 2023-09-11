//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//
//
//class Solution {
//public:
//    int hammingDistance(int x, int y) {
//        int s = x ^ y;
//        int ret = 0;
//        while (s) {
//            // s & 1可以把最低位取出来
//            ret += s & 1;
//            // s右移一位，s=s>>1;
//            s >>= 1;
//        }
//        return ret;
//    }
//};
//
//
//int main()
//{
//    system("pause");
//    return 0;
//}
