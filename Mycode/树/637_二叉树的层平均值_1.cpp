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
//	vector<double> averageOfLevels(TreeNode* root) {
//		vector<double> ans;
//		if (!root) {
//			return ans;
//		}
//		queue<TreeNode*> q;
//		q.push(root);
//		while (!q.empty()) {
//			//q的大小为上一次循环压入的某一层的结点总个数
//			int count = q.size();
//			double sum = 0;
//			for (int i = 0; i < count; ++i) {
//				TreeNode* node = q.front();
//				q.pop();
//				//q.size()次循环，获取到某一层结点值的总和
//				sum += node->val;
//				if (node->left) {
//					q.push(node->left);
//				}
//				if (node->right) {
//					q.push(node->right);
//				}
//			}
//			ans.push_back(sum / count);
//		}
//		return ans;
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
//	vector<int> nums = { 1,2,3,4,5,6,7 };
//	TreeNode* root = createTree(nums, 0);
//	levelOrderIter(root);
//
//	Solution ss;
//
//
//
//	system("pause");
//	return 0;
//}