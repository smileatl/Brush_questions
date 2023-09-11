//#include <iostream>
//using namespace std;
//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <numeric>
//#include <functional>
//#include <set>
//
//vector<int> createVector() {
//    vector<int> nums;
//    int tmp;
//    while (cin >> tmp) {
//        nums.push_back(tmp);
//        if (cin.get() == '\n') break;
//    }
//    return nums;
//}
//
//void printVector(vector<int>& v) {
//    for (int i = 0; i < v.size(); ++i) {
//        cout << v[i] << " ";
//    }
//    cout << endl;
//}
//
//
//
//class Solution {
//public:
//    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//        int flag = 0;
//        //左右两端各增加一个0，不用考虑边界条件，任意位置处只要连续出现三个0就可以栽上一颗花
//        flowerbed.insert(flowerbed.begin(), 0);
//        flowerbed.push_back(0);
//        for (int i = 0; i < flowerbed.size(); ++i) {
//            if (flowerbed[i] == 0) {
//                if (i + 1 < flowerbed.size() && i + 2 < flowerbed.size()) {
//                    if (flowerbed[i + 1] == 0 && flowerbed[i + 2] == 0) {
//                        //i多加1，移动两个位置
//                        i = i + 1;  //因为每连续三个0，中间的那个0才是用来种花的，
//                        //比如连续5个0的情况
//                        flag += 1;
//                    }
//                }
//            }
//        }
//        return flag >= n;
//    }
//};
//
//int main()
//{
//    vector<int> flowerbed = { 1,0,0,0,0,1 };
//    int n = 2;
//
//    Solution ss;
//    cout << boolalpha << ss.canPlaceFlowers(flowerbed, n) << endl;
//
//    system("pause");
//    return 0;
//}