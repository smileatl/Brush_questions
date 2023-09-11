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
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        int m = matrix.size(), n = matrix[0].size();
//        for (int i = 0; i < m; i++) {
//            int l = 0;
//            int r = n - 1;
//            while (l <= r) {
//                int mid = (l + r) / 2;
//                if (matrix[i][mid] == target) return true;
//                else if (matrix[i][mid] < target) {
//                    l = mid + 1;
//                }
//                else if (matrix[i][mid] > target) {
//                    r = mid - 1;
//                }
//            }
//        }
//        return false;
//    }
//};
//
//int main()
//{
//    vector<vector<int>> matrix = { {1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30} };
//    int target = 20;
//    Solution ss;
//    bool a =ss.searchMatrix(matrix, target);
//    cout << a;
//
//    system("pause");
//    return 0;
//}
