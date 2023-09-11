//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//
//// Definition for a binary tree node.
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//class Solution {
//public:
//	int height(TreeNode* root) {
//		if (root == NULL) {
//			return 0;
//		}
//		else {
//			//获取当前子树的深度
//			return max(height(root->left), height(root->right)) + 1;
//		}
//	}
//
//	bool isBalanced(TreeNode* root) {
//		if (root == NULL) {
//			return true;
//		}
//		else {
//			//左右子树的深度差皆满足条件
//			return abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
//		}
//	}
//};
//
//
//
//
////根据数组，层次法创建二叉树
//TreeNode* createTree(vector<int>& l_nums, int i) //层次法创建二叉树
//{
//	if (i >= l_nums.size() || l_nums[i] == 0) //数值为0或超出数组范围
//		return nullptr;
//	TreeNode* root = new TreeNode(l_nums[i]);
//	root->left = createTree(l_nums, i * 2 + 1);
//	root->right = createTree(l_nums, i * 2 + 2);
//	return root;
//}
//
//
//int main()
//{
//	vector<int> nums = { 3,9,20,0,0,15,7 };
//	TreeNode* root = createTree(nums, 0);
//
//	Solution ss;
//	cout << boolalpha << ss.isBalanced(root) << endl;
//
//	system("pause");
//	return 0;
//}