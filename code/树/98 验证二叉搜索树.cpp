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
//    vector<int> vec;
//    void helper(TreeNode* root) {
//        if (root == nullptr) return;
//        helper(root->left);
//        vec.push_back(root->val);
//        helper(root->right);
//    }
//
//    bool isValidBST(TreeNode* root) {
//        vec.clear();
//        helper(root);
//        for (int i = 1; i < vec.size(); i++) {
//            if (vec[i] <= vec[i - 1]) return false;
//        }
//        return true;
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