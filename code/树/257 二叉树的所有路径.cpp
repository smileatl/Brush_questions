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
//    void helper(TreeNode* cur, vector<int>& path, vector<string>& result) {
//        path.push_back(cur->val);
//        if (cur->left == nullptr && cur->right == nullptr) {
//            string sPath;
//            for (int i = 0; i < path.size()-1; ++i) {
//                sPath += to_string(path[i]);
//                sPath += "->";
//            }
//            sPath += to_string(path[path.size() - 1]);
//            result.push_back(sPath);
//            return;
//        }
//
//        if (cur->left) {
//            helper(cur->left, path, result);
//            path.pop_back();
//        }
//
//        if (cur->right) {
//            helper(cur->right, path, result);
//            path.pop_back();
//        }
//    }
//
//    vector<string> binaryTreePaths(TreeNode* root) {
//        vector<string> result;
//        vector<int> path;
//        if (root == nullptr) return result;
//        helper(root, path, result);
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