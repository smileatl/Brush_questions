//#include <iostream>
//using namespace std;
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <stack>
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
//    int kthLargest(TreeNode* root, int k) {
//        vector<int> v;
//        stack<TreeNode*> s;
//        while (root || !s.empty()) {
//            while (root) {
//                s.push(root);
//                //找到最最左的结点
//                root = root->left;
//            }
//            root = s.top();
//            s.pop();
//            v.emplace_back(root->val);
//            //取右子树
//            root = root->right;
//        }
//        //取第k个大的数
//        return v[v.size() - k];
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