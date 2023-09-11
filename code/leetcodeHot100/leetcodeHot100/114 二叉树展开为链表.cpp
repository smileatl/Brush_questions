//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
//#include <algorithm>
//
//
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
//
//
//class Solution {
//public:
//    void flatten(TreeNode* root) {
//        vector<TreeNode*> help;
//        preorderTraversal(root, help);
//        for (int i = 1; i < help.size(); i++) {
//            TreeNode* pre = help[i - 1], *cur = help[i];
//            pre->left = nullptr;
//            pre->right = cur;
//        }
//    }
//
//    void preorderTraversal(TreeNode* root, vector<TreeNode*>& help) {
//        if (root != nullptr) {
//            help.push_back(root);
//            preorderTraversal(root->left, help);
//            preorderTraversal(root->right, help);
//        }
//    }
//};
//
//
//int main()
//{
//    system("pause");
//    return 0;
//}
