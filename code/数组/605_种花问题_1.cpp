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
//        //�������˸�����һ��0�����ÿ��Ǳ߽�����������λ�ô�ֻҪ������������0�Ϳ�������һ�Ż�
//        flowerbed.insert(flowerbed.begin(), 0);
//        flowerbed.push_back(0);
//        for (int i = 0; i < flowerbed.size(); ++i) {
//            if (flowerbed[i] == 0) {
//                if (i + 1 < flowerbed.size() && i + 2 < flowerbed.size()) {
//                    if (flowerbed[i + 1] == 0 && flowerbed[i + 2] == 0) {
//                        //i���1���ƶ�����λ��
//                        i = i + 1;  //��Ϊÿ��������0���м���Ǹ�0���������ֻ��ģ�
//                        //��������5��0�����
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