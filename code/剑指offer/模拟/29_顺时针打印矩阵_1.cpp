#include <iostream>
using namespace std;
#include <vector>

//class Solution {
//public:
//	vector<int> spiralOrder(vector<vector<int>>& matrix) {
//		if (matrix.size() == NULL) {
//			return vector<int>{};
//		}
//		int l=0, r=matrix[0].size()-1, t=0, b=matrix.size()-1;
//		vector<int> res;
//		while (true) {
//			for (int i = l; i <= r; ++i) {
//				res.push_back(matrix[t][i]);
//			}
//			if (++t > b) break;
//			for (int i = t; i <= b; ++i) {
//				res.push_back(matrix[i][r]);
//			}
//			if (--r < l) break;
//			for (int i = r; i >= l; --i) {
//				res.push_back(matrix[b][i]);
//			}
//			if (--b < t) break;
//			for (int i = b; i >= t; --i) {
//				res.push_back(matrix[i][l]);
//			}
//			if (++l > r) break;
//		}	
//		return res;
//	}
//};

//int main()
//{
//	vector<vector<int>> matrix = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	Solution ss;
//	vector<int> ans = ss.spiralOrder(matrix);
//
//
//	system("pause");
//	return 0;
//}