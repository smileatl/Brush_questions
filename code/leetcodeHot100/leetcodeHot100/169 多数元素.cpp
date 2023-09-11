//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//
//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        unordered_map<int, int> umap;
//        int result = 0;
//        int maxNum = 0;
//        for (auto num : nums) {
//            umap[num]++;
//            if(umap[num]>maxNum){
//                maxNum = umap[num];
//                result = num;
//            }
//        }
//        return result;
//    }
//};
//
//
//int main()
//{
//    system("pause");
//    return 0;
//}
