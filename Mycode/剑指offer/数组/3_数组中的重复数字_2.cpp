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
			//�����ǰֵ����target����targetһ���ڵ�ǰֵ�����Ϸ���--i��ȥ��ǰ��
			if (matrix[i][j] > target) {
				--i;
			}
			//��ǰֵС��target����targetһ���ڵ�ǰֵ�����ҷ���++j��ȥ��ǰ��
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