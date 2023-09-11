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
//	bool isSymmetric(TreeNode* root) {
//		if (root) {
//			return isSymmetric(root->left, root->right);
//		}
//		else{
//			return true;
//		}
//	}
//
//	bool isSymmetric(TreeNode* left, TreeNode* right) {
//		//如果两个子树都为空指针，则它们相等或对称
//		if (!left && !right) {
//			return true;
//		}
//		//如果两个子树只有一个为空指针，则它们不相等或不对称
//		if (!left || !right) {
//			return false;
//		}
//		//如果两个子树根结点的值不相等，则它们不相等或不对称
//		if (left->val != right->val) {
//			return false;
//		}
//		return isSymmetric(left->left, right->right) && isSymmetric(left->right, right->left);
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
//	vector<int> nums = { 1,2,2,0,3,0,3 };
//	TreeNode* root = createTree(nums, 0);
//	levelOrderIter(root);
//
//	Solution ss;
//	cout << boolalpha << ss.isSymmetric(root) << endl;
//
//
//	system("pause");
//	return 0;
//}