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
//    int maxCount = 0;
//    int count = 0;
//    TreeNode* pre = nullptr;
//    vector<int> result;
//    void helper(TreeNode* cur) {
//        if (cur == nullptr) return;
//        helper(cur->left);
//
//        if (pre == nullptr) {
//            count = 1;
//        }
//        else if (pre->val == cur->val) {
//            ++count;
//        }
//        else {
//            count = 1;
//        }
//        
//        pre = cur;
//        if (count == maxCount) {
//            result.push_back(cur->val);
//        }
//        if (count > maxCount) {
//            maxCount = count;
//            result.clear();
//            result.push_back(cur->val);
//        }
//        helper(cur->right);
//
//    }
//
//    vector<int> findMode(TreeNode* root) {
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
