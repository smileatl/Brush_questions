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
//    TreeNode* trimBST(TreeNode* root, int low, int high) {
//        // �޼��Ĳ�������������ֹ�����Ͻ��еģ����������սڵ㷵�ؾͿ�����
//        if (root == nullptr) return nullptr;
//        
//        // ���root����ǰ�ڵ㣩��Ԫ��С��low����ֵ����ôӦ�õݹ�������������������������������ͷ��㡣
//        if (root->val < low) {
//            TreeNode* right = trimBST(root->right, low, high);
//            return right;
//        }
//       
//        // ���root(��ǰ�ڵ�)��Ԫ�ش���high�ģ���ôӦ�õݹ�������������������������������ͷ��㡣
//        if (root->val > high) {
//            TreeNode* left = trimBST(root->left, low, high);
//            return left;
//        }
//
//        // Ҫ����һ�㴦�����������Ľ������root->left���������������Ľ������root->right
//        root->left = trimBST(root->left, low, high);
//        root->right = trimBST(root->right, low, high);
//        return root;
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
//class Solution {
//public:
//    TreeNode* trimBST(TreeNode* root, int low, int high) {
//
//    }
//};