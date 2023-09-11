//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//// Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//
//
//class Solution {
//public:
//    TreeNode* mirrorTree(TreeNode* root) {
//        if (root == nullptr) {
//            return nullptr;
//        }
//        TreeNode* temp = root->left;
//        root->left = root->right;
//        root->right = temp;
//        if (root->left) {
//            mirrorTree(root->left);
//        }
//        if (root->right) {
//            mirrorTree(root->right);
//        }
//        return root;
//    }
//};
//
//
////根据数组，层次法创建二叉树
//TreeNode* createTree(vector<int>& nums, int i) //层次法创建二叉树
//{
//    if (i >= nums.size() || nums[i] == 0) //数值为0或超出数组范围
//        return nullptr;
//    TreeNode* root = new TreeNode(nums[i]);
//    root->left = createTree(nums, i * 2 + 1);
//    root->right = createTree(nums, i * 2 + 2);
//    return root;
//}
//
////层次遍历，迭代法
//void levelOrderIter(TreeNode* root) {
//    queue<TreeNode*> que;
//    que.push(root);
//    while (!que.empty()) {
//        cout << que.front()->val << " ";
//        if (que.front()->left != nullptr) {
//            que.push(que.front()->left);
//        }
//        if (que.front()->right != nullptr) {
//            que.push(que.front()->right);
//        }
//        que.pop();
//    }
//    cout << endl;
//}
//
//
//int main()
//{
//    vector<int> nums = { 1 };
//    TreeNode* root = createTree(nums, 0);
//    levelOrderIter(root);
//
//    Solution ss;
//    ss.mirrorTree(root);
//    levelOrderIter(root);
//
//    system("pause");
//    return 0;
//}