//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//// Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//
//
//class Solution {
//public:
//    int maxDepth(TreeNode* root) {
//        //当root为空，说明已经越过叶子结点，返回深度0
//        if (!root) {
//            return 0;
//        }
//        //本质上是后序遍历
//        //递归计算右子树和左子树的深度
//        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
//    }
//};
//
//
////根据数组，层次法创建二叉树
//TreeNode* createTree(vector<int>& l_nums, int i) //层次法创建二叉树
//{
//    if (i >= l_nums.size() || l_nums[i] == 0) //数值为0或超出数组范围
//        return nullptr;
//    TreeNode* root = new TreeNode(l_nums[i]);
//    root->left = createTree(l_nums, i * 2 + 1);
//    root->right = createTree(l_nums, i * 2 + 2);
//    return root;
//}
//
//
//int main()
//{
//    vector<int> nums = { 3,9,20,0,0,15,7 };
//    TreeNode* root = createTree(nums, 0);
//
//    /*Solution ss;
//    cout << ss.maxDepth(root) << endl;*/
//
//    system("pause");
//    return 0;
//}