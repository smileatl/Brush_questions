//#include <iostream>
//using namespace std;
//#include <unordered_set>
//#include <unordered_map>
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
//    int ans;
//    int depth(TreeNode* root) {
//        if (root == nullptr) return 0;
//
//        int left = depth(root->left);
//        int right = depth(root->right);
//        ans = max(ans, left + right + 1);
//        return max(left, right) + 1;
//
//    }
//
//    int diameterOfBinaryTree(TreeNode* root) {
//        ans = 1;
//        depth(root);
//        return ans;
//    }
//};
//
//
//int main()
//{
//    system("pause");
//    return 0;
//}
