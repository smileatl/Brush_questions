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
//        //��ֹ����������Ҫ����Ϊ�ٷ����˾����������е�����
//        //�ݹ����
//        //��һ�������
//        if (root->val < p->val && root->val < q->val) {//�����ǲ��Ƕ�������ӵĺ��
//            return lowestCommonAncestor(root->right, p, q);//�ǵĻ��Ͷ��������ȥ�Ϻ���������ݹ飩
//        }
//        //�ڶ��������
//        if (root->val > p->val && root->val > q->val) {//��������ӵĺ���������ǲ��Ƕ����Ҷ��ӵĺ��
//            return lowestCommonAncestor(root->left, p, q);//�ǵĻ��Ͷ����Ҷ���ȥ�Ϻ���������ݹ飩
//        }
//        //�����������
//        //����Ӻ��Ҷ��Ӷ�ֻ��ʶһ������ǰroot������������ȣ���Ϊroot��������p��q�Ĺ���������
//        //�����ֲ�����Ŀ��Ҫ�ҵ��Ľ⣬���Է���
//        return root;
//    }
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