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
//
//class Solution {
//public:
//	int pathSum(TreeNode* root, int targetSum) {
//		if (root) {
//			return pathSumStartWithRoot(root, targetSum) + 
//				pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
//		}
//		else {
//			return 0;
//		}
//	}
//
//	long long pathSumStartWithRoot(TreeNode* root, long long sum) {
//		if (!root) {
//			return 0;
//		}
//
//		long long count;
//		if (root->val == sum) {
//			count = 1;
//		}
//		else {
//			count = 0;
//		}
//
//		count += pathSumStartWithRoot(root->left, sum - root->val);
//		count += pathSumStartWithRoot(root->right, sum - root->val);
//		return count;
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
////层次遍历，迭代法
//void levelOrderIter(TreeNode* root) {
//	queue<TreeNode*> que;
//	que.push(root);
//	while (!que.empty()) {
//		cout << que.front()->val << " ";
//		if (que.front()->left != nullptr) {
//			que.push(que.front()->left);
//		}
//		if (que.front()->right != nullptr) {
//			que.push(que.front()->right);
//		}
//		que.pop();
//	}
//	cout << endl;
//}
//
//
//int main()
//{
//	vector<int> nums = { 3,9,20,0,0,15,7 };
//	TreeNode* root = createTree(nums, 0);
//	levelOrderIter(root);
//
//	Solution ss;
//	
//
//	system("pause");
//	return 0;
//}