#include <iostream>
using namespace std;
#include <vector>
#include <queue>
#include <algorithm>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> v;
        if (root == nullptr) {
            return v;
        }
        q.push(root);
        while (!q.empty()) {
            v.push_back(q.front()->val);
            if (q.front()->left != nullptr) {
                q.push(q.front()->left);
            }
            if (q.front()->right != nullptr) {
                q.push(q.front()->right);
            }
            q.pop();
        }
        return v;
    }
};


//根据数组，层次法创建二叉树
TreeNode* createTree(vector<int>& nums, int i) //层次法创建二叉树
{
    if (i >= nums.size() || nums[i] == 0) //数值为0或超出数组范围
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
    vector<int> nums = { 3,9,20,0,0,15,7 };
    TreeNode* root = createTree(nums, 0);
    levelOrderIter(root);

    Solution ss;


    system("pause");
    return 0;
}