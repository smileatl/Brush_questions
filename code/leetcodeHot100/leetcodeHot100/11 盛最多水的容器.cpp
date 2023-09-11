//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//
//
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int i = 0, j = height.size() - 1, res = 0;
//        while (i < j) {
//            if (height[i] < height[j]) {
//                res = max(res, (j - i) * height[i++]);
//            }
//            else {
//                res = max(res, (j - i) * height[j--]);
//            }
//        }
//        return res;
//    }
//};
//
//
//
//
//int main()
//{
//    system("pause");
//    return 0;
//}
