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
//    TreeNode* searchBST(TreeNode* root, int val) {
//        if (root == nullptr || root->val == val) return root;
//        TreeNode* result = nullptr;
//        if (root->val > val) searchBST(root->left, val);
//        if (root->val < val) searchBST(root->right, val);
//        return result;
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