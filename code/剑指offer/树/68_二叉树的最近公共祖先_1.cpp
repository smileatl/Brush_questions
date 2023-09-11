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
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        //终止条件：不需要，因为官方给了均存在与树中的条件
//        //递归操作
//        //第一种情况：
//        if (root->val < p->val && root->val < q->val) {//看看是不是都是左儿子的后代
//            return lowestCommonAncestor(root->right, p, q);//是的话就丢给左儿子去认后代（继续递归）
//        }
//        //第二种情况：
//        if (root->val > p->val && root->val > q->val) {//不是左儿子的后代，看看是不是都是右儿子的后代
//            return lowestCommonAncestor(root->left, p, q);//是的话就丢给右儿子去认后代（继续递归）
//        }
//        //第三种情况：
//        //左儿子和右儿子都只认识一个，当前root就是最近的祖先，因为root本来就是p、q的公共的祖先
//        //第三种才是题目需要找到的解，所以返回
//        return root;
//    }
//};
//
//
////根据数组，层次法创建二叉树
//TreeNode* createTree(vector<int>& nums, int i) //层次法创建二叉树
//{
//    if (i >= nums.size() || nums[i] == NULL) //数值为0或超出数组范围
//        return nullptr;
//    TreeNode* root = new TreeNode(nums[i]);
//    root->left = createTree(nums, i * 2 + 1);
//    root->right = createTree(nums, i * 2 + 2);
//    return root;
//}
//
////层次遍历，迭代法
//void levelOrderIter(TreeNode* root) {
//    queue<TreeNode*> que;
//    que.push(root);
//    while (!que.empty()) {
//        cout << que.front()->val << " ";
//        if (que.front()->left != nullptr) {
//            que.push(que.front()->left);
//        }
//        if (que.front()->right != nullptr) {
//            que.push(que.front()->right);
//        }
//        que.pop();
//    }
//    cout << endl;
//}
//
//
//int main()
//{
//    vector<int> nums = { 6,2,8,0,4,7,9,NULL,NULL,3,5 };
//    TreeNode* root = createTree(nums, 0);
//    levelOrderIter(root);
//
//    Solution ss;
//
//
//    system("pause");
//    return 0;
//}