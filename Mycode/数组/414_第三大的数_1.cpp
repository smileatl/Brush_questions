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
//    int thirdMax(vector<int>& nums) {
//        set<int> s;
//        for (int num : nums) {
//            s.insert(num);
//            if (s.size() > 3) {
//                s.erase(s.begin());
//            }
//        }
//        return s.size() == 3 ? *s.begin() : *s.rbegin();
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
//    //printVector(ivec);
//
//    Solution s;
//    cout << s.thirdMax(ivec)<<endl;
//
//    system("pause");
//    return 0;
//}