#include <iostream>
using namespace std;
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <unordered_map>

// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


class Solution {
public:
	vector<int> preorder;
	unordered_map<int, int> dic;

	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		this->preorder = preorder;
		//������ϣ��dic����������ֵ��ֵ������������г��ֵ�λ��
		for (int i = 0; i < inorder.size(); ++i) {
			dic[inorder[i]] = i;
		}
		return helper(0, 0, inorder.size() - 1);
	}
	//�������
	//root:�������ǰ�����������
	//left:�����������������߽�
	//right:����������������ұ߽�
	TreeNode* helper(int root, int left, int right) {
		//��left>right�������Ѿ�Խ��Ҷ�ڵ㣬��ʱ����null
		if (left > right) return nullptr;
		//1�����������node�����ֵΪpreorder[root]
		TreeNode* node = new TreeNode(preorder[root]);
		//2�������������������Ҹ�������������inorder�е�����i
		int i = dic[preorder[root]];
		//�������ĸ����������root+1
		node->left = helper(root + 1, left, i - 1);
		//�������ĸ����������root + i - left + 1�����������+����������+1��
		node->right = helper(root + i - left + 1, i + 1, right);
		//����ֵ�����ݷ���node����Ϊ��һ��ݹ��и�������/���ӽ��
		return node;
	}
};


//�������飬��η�����������
TreeNode* createTree(vector<int>& nums, int i) //��η�����������
{
	if (i >= nums.size() || nums[i] == NULL) //��ֵΪ0�򳬳����鷶Χ
		return nullptr;
	TreeNode* root = new TreeNode(nums[i]);
	root->left = createTree(nums, i * 2 + 1);
	root->right = createTree(nums, i * 2 + 2);
	return root;
}

//��α�����������
void levelOrderIter(TreeNode* root) {
	queue<TreeNode*> que;
	que.push(root);
	while (!que.empty()) {
		cout << que.front()->val << " ";
		if (que.front()->left != nullptr) {
			que.push(que.front()->left);
		}
		if (que.front()->right != nullptr) {
			que.push(que.front()->right);
		}
		que.pop();
	}
	cout << endl;
}


int main()
{
	vector<int> nums = { 6,2,8,0,4,7,9,NULL,NULL,3,5 };
	TreeNode* root = createTree(nums, 0);
	levelOrderIter(root);

	Solution ss;


	system("pause");
	return 0;
}