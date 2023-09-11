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
//	int pathSum(TreeNode* root, int targetSum) {
//
//	}
//};
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
//	vector<int> nums = { 10,5,-3,3,2,0,11,3,-2,0,1 };
//	TreeNode* root = createTree(nums, 0);
//
//	Solution ss;
//	/*cout << ss.diameterOfBinaryTree(root) << endl;*/
//
//	system("pause");
//	return 0;
//}