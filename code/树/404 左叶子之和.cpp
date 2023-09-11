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
//    int sumOfLeftLeaves(TreeNode* root) {
//        if (root == nullptr) return 0;
//        if (root->left == nullptr && root->right == nullptr) return 0;
//        int leftValue = sumOfLeftLeaves(root->left);
//        if (root->left && !root->left->left && !root->left->right) {
//            leftValue = root->left->val;
//        }
//        int righValue = sumOfLeftLeaves(root->right);
//        return leftValue + righValue;
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