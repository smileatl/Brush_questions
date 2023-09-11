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
//    int result = INT_MAX;
//    TreeNode* pre = nullptr;
//
//    void helper(TreeNode* cur) {
//        if (cur == nullptr) return;
//        helper(cur->left);
//        if (pre != nullptr) {
//            result = min(result, cur->val - pre->val);
//        }
//
//        pre = cur;
//        helper(cur->right);
//
//    }
//
//    int getMinimumDifference(TreeNode* root) {
//        helper(root);
//        return result;
//    }
//};
//
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