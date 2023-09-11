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
		//建立哈希表dic，键：结点的值，值：在中序遍历中出现的位置
		for (int i = 0; i < inorder.size(); ++i) {
			dic[inorder[i]] = i;
		}
		return helper(0, 0, inorder.size() - 1);
	}
	//输入参数
	//root:根结点在前序遍历的索引
	//left:子树在中序遍历的左边界
	//right:子树在中序遍历的右边界
	TreeNode* helper(int root, int left, int right) {
		//当left>right，代表已经越过叶节点，此时返回null
		if (left > right) return nullptr;
		//1、建立根结点node：结点值为preorder[root]
		TreeNode* node = new TreeNode(preorder[root]);
		//2、划分左右子树：查找根结点在中序遍历inorder中的索引i
		int i = dic[preorder[root]];
		//左子树的根结点索引：root+1
		node->left = helper(root + 1, left, i - 1);
		//右子树的根结点索引：root + i - left + 1（根结点索引+左子树长度+1）
		node->right = helper(root + i - left + 1, i + 1, right);
		//返回值：回溯返回node，作为上一层递归中根结点的左/右子结点
		return node;
	}
};


//根据数组，层次法创建二叉树
TreeNode* createTree(vector<int>& nums, int i) //层次法创建二叉树
{
	if (i >= nums.size() || nums[i] == NULL) //数值为0或超出数组范围
		return nullptr;
	TreeNode* root = new TreeNode(nums[i]);
	root->left = createTree(nums, i * 2 + 1);
	root->right = createTree(nums, i * 2 + 2);
	return root;
}

//层次遍历，迭代法
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