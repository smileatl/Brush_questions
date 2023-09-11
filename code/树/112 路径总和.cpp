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
//private:
//    bool traversal(TreeNode* cur, int count) {
//        if (!cur->left && !cur->right && count == 0) return true; // ����Ҷ�ӽڵ㣬���Ҽ���Ϊ0
//        if (!cur->left && !cur->right) return false; // ����Ҷ�ӽڵ�ֱ�ӷ���
//
//        if (cur->left) { // ��
//            count -= cur->left->val; // �ݹ飬����ڵ�;
//            if (traversal(cur->left, count)) return true;
//            count += cur->left->val; // ���ݣ�����������
//        }
//        if (cur->right) { // ��
//            count -= cur->right->val; // �ݹ飬����ڵ�;
//            if (traversal(cur->right, count)) return true;
//            count += cur->right->val; // ���ݣ�����������
//        }
//        return false;
//    }
//
//public:
//    bool hasPathSum(TreeNode* root, int sum) {
//        if (root == NULL) return false;
//        return traversal(root, sum - root->val);
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