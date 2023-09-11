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
//    bool isSymmetric(TreeNode* root) {
//        if (root) {
//            return helper(root->left, root->right);
//        }
//        else {
//            return true;
//        }
//    }
//
//    bool helper(TreeNode* p, TreeNode* q) {
//        if (!p && !q) {
//            return true;
//        }
//        if (!p || !q) {
//            return false;
//        }
//        if(p->val!=q->val){
//            return false;
//        }
//        return helper(p->left, q->right) && helper(p->right, q->left);
//    }
//
//};
//
//
////�������飬��η�����������
//TreeNode* createTree(vector<int>& nums, int i) //��η�����������
//{
//    if (i >= nums.size() || nums[i] == NULL) //��ֵΪ0�򳬳����鷶Χ
//        return nullptr;
//    TreeNode* root = new TreeNode(nums[i]);
//    root->left = createTree(nums, i * 2 + 1);
//    root->right = createTree(nums, i * 2 + 2);
//    return root;
//}
//
////��α�����������
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