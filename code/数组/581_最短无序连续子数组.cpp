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
//void printVector(vector<int>& v) {
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
//class Solution {
//public:
//    int findUnsortedSubarray(vector<int>& nums) {
//        if (nums.size() <= 1) return 0;
//        int len = nums.size(), low = 0, high = len - 1, maxNum = nums[0], minNum = nums[len - 1];
//        for (int i = 1; i < len; i++) {
//            maxNum = max(maxNum, nums[i]);
//            minNum = min(minNum, nums[len - 1 - i]);
//            //如果小于当前的最大值，说明到达了无序列表，记录当前值，一直到有序列表位置
//            //后半部分的有序列表的第一个值，也要比前面大或等于前面的最大值
//            if (nums[i] < maxNum) low = i;
//            if (nums[len - 1 - i] > minNum) high = len - 1 - i;
//        }
//        return low > high ? low - high + 1 : 0;
//    }
//};
//
//int main()
//{
//    vector<int> ivec;
//    int num;
//    do
//    {
//        cin >> num;
//        ivec.push_back(num);
//    } while (getchar() != '\n');
//
//    printVector(ivec);
//
//    Solution s;
//    s.findUnsortedSubarray(ivec);
//    cout << s.findUnsortedSubarray(ivec) << endl;;
//
//    system("pause");
//    return 0;
//}