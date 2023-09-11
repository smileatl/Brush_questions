//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//#include <unordered_map>
//#include <string>
//
//// Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left),
//        right(right) {}
//};
//
//
//class Solution {
//public:
//    TreeNode* trimBST(TreeNode* root, int low, int high) {
//        // 修剪的操作并不是在终止条件上进行的，所有遇到空节点返回就可以了
//        if (root == nullptr) return nullptr;
//        
//        // 如果root（当前节点）的元素小于low的数值，那么应该递归右子树，并返回右子树符合条件的头结点。
//        if (root->val < low) {
//            TreeNode* right = trimBST(root->right, low, high);
//            return right;
//        }
//       
//        // 如果root(当前节点)的元素大于high的，那么应该递归左子树，并返回左子树符合条件的头结点。
//        if (root->val > high) {
//            TreeNode* left = trimBST(root->left, low, high);
//            return left;
//        }
//
//        // 要将下一层处理完左子树的结果赋给root->left，处理完右子树的结果赋给root->right
//        root->left = trimBST(root->left, low, high);
//        root->right = trimBST(root->right, low, high);
//        return root;
//    }
//};
//
//
//int main()
//{
//
//
//
//    system("pause");
//    return 0;
//}
//class Solution {
//public:
//    TreeNode* trimBST(TreeNode* root, int low, int high) {
//
//    }
//};