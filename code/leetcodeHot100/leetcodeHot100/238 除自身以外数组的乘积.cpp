//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//#include <algorithm>
//#include <stack>
//
//
//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        int length = nums.size();
//        vector<int> answer(length);
//
//        answer[0] = 1;
//        for (int i = 1; i < length; i++) {
//            answer[i] = answer[i - 1] * nums[i - 1];
//        }
//
//        int R = 1;
//        for (int i = length - 1; i >= 0; i--) {
//            answer[i] = answer[i] * R;
//            R = R * nums[i];
//        }
//        return answer;   
//    }
//};
//
//
//int main()
//{
//    
//
//    system("pause");
//    return 0;
//}
