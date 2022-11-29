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
//		//����Ԫ�ض��������
//		unordered_set<int> dict(to_delete.begin(), to_delete.end());
//		root = helper(root, dict, forest);
//		if (root) {
//			//����ٽ�ɾ�������������forest��
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
//			//��ɾ�������������������ͷ���forest��
//			if (root->left) {
//				forest.push_back(root->left);
//			}
//			if (root->right) {
//				forest.push_back(root->right);
//			}
//			//��ɾ���Ľ����Ϊ��
//			root = NULL;
//		}
//		return root;
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