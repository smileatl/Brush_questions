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
//class Solution {
//public:
//    int maximumProduct(vector<int>& nums) {
//        int product;
//        int len = nums.size();
//        sort(nums.begin(), nums.end());
//        //����������������и����������˻��ȿ�����������������ĳ˻���
//        //Ҳ������������С������������ֵ�������������ĳ˻���
//        product = max(nums[0] * nums[1] * nums[len - 1], nums[len - 1] * nums[len - 2] * nums[len - 3]);
//        return product;
//    }
//};
//
//int main()
//{
//    vector<int> nums = { 1,0,0,0,0,1 };
//    
//    Solution ss;
//
//
//
//    system("pause");
//    return 0;
//}