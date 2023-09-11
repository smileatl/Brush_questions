//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//#include <unordered_set>
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
//	vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
//		vector<TreeNode*> forest;
//		//容器元素都互不相等
//		unordered_set<int> dict(to_delete.begin(), to_delete.end());
//		root = helper(root, dict, forest);
//		if (root) {
//			//最后再将删除结点后的树放入forest中
//			forest.push_back(root);
//		}
//		return forest;
//	}
//
//	TreeNode* helper(TreeNode* root, unordered_set<int>& dict, vector<TreeNode*>& forest) {
//		if (!root) {
//			return root;
//		}
//		root->left = helper(root->left, dict, forest);
//		root->right = helper(root->right, dict, forest);
//		if (dict.count(root->val)) {
//			//被删除结点如果有左右子树就放入forest中
//			if (root->left) {
//				forest.push_back(root->left);
//			}
//			if (root->right) {
//				forest.push_back(root->right);
//			}
//			//被删除的结点置为空
//			root = NULL;
//		}
//		return root;
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
//	vector<int> to_delete = { 3,5 };
//	vector<int> nums = { 1,2,3,4,5,6,7 };
//	TreeNode* root = createTree(nums, 0);
//	levelOrderIter(root);
//
//	Solution ss;
//	ss.delNodes(root, to_delete);
//
//
//	system("pause");
//	return 0;
//}