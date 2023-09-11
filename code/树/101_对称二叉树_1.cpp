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
//		//�������������Ϊ��ָ�룬��������Ȼ�Գ�
//		if (!left && !right) {
//			return true;
//		}
//		//�����������ֻ��һ��Ϊ��ָ�룬�����ǲ���Ȼ򲻶Գ�
//		if (!left || !right) {
//			return false;
//		}
//		//�����������������ֵ����ȣ������ǲ���Ȼ򲻶Գ�
//		if (left->val != right->val) {
//			return false;
//		}
//		return isSymmetric(left->left, right->right) && isSymmetric(left->right, right->left);
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