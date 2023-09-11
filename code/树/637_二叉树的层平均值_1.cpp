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
//			//q�Ĵ�СΪ��һ��ѭ��ѹ���ĳһ��Ľ���ܸ���
//			int count = q.size();
//			double sum = 0;
//			for (int i = 0; i < count; ++i) {
//				TreeNode* node = q.front();
//				q.pop();
//				//q.size()��ѭ������ȡ��ĳһ����ֵ���ܺ�
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
////�������飬��η�����������
//TreeNode* createTree(vector<int>& l_nums, int i) //��η�����������
//{
//	if (i >= l_nums.size() || l_nums[i] == 0) //��ֵΪ0�򳬳����鷶Χ
//		return nullptr;
//	TreeNode* root = new TreeNode(l_nums[i]);
//	root->left = createTree(l_nums, i * 2 + 1);
//	root->right = createTree(l_nums, i * 2 + 2);
//	return root;
//}
//
////��α�����������
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