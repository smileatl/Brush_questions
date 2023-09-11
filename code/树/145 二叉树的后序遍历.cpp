//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//#include <unordered_map>
//
//// Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//
//class Solution {
//public:
//    void helper(TreeNode* cur, vector<int>& result) {
//        if (cur == nullptr) return;
//        helper(cur->left, result);
//        helper(cur->right, result);
//        result.push_back(cur->val);
//    }
//
//    vector<int> postorderTraversal(TreeNode* root) {
//        vector<int> result;
//        helper(root, result);
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