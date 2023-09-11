#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>	


class Solution {
public:
	bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
		int i = matrix.size() - 1;
		int j = 0;
		while (i >= 0 && j <matrix[0].size()) {
			//如果当前值大于target，则target一定在当前值的行上方，--i消去当前行
			if (matrix[i][j] > target) {
				--i;
			}
			//当前值小于target，则target一定在当前值的列右方，++j消去当前列
			else if (matrix[i][j] < target) {
				++j;
			}
			else {
				return true;
			}
		}
		return false;
	}
};

int main()
{
	vector<vector<int>> matrix = { {1,   4,  7, 11, 15},
		{2,   5,  8, 12, 19},{3,   6,  9, 16, 22},{10, 13, 14, 17, 24},{18, 21, 23, 26, 30} };
	int target = 5;
	system("pause");
	return 0;
}