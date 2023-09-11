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
//            //���С�ڵ�ǰ�����ֵ��˵�������������б���¼��ǰֵ��һֱ�������б�λ��
//            //��벿�ֵ������б�ĵ�һ��ֵ��ҲҪ��ǰ�������ǰ������ֵ
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