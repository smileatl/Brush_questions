#include <iostream>
using namespace std;
#include <vector>
#include <numeric>
#include <unordered_set>


struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 

class Solution {
public:
	int rob(TreeNode* root) {
		vector<int> result = robTtree(root);
		return max(result[0], result[1]);
	}

	vector<int> robTtree(TreeNode* cur) {
		if (cur == nullptr) return vector<int>{0, 0};
		vector<int> left = robTtree(cur->left);
		vector<int> right = robTtree(cur->right);
		int val1 = cur->val + left[0] + right[0];
		int val2 = max(left[0], left[1]) + max(right[0], right[1]);
		return { val2,val1 };
	}
};

int main()
{


	system("pause");
	return 0;
}