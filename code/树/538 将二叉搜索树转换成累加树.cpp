#include <iostream>
using namespace std;
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left),
        right(right) {}
};


class Solution {
public:
    int pre = 0;
    void helper(TreeNode* cur) {
        if (cur == nullptr) return;
        helper(cur->right);
        cur->val += pre;
        pre = cur->val;
        helper(cur->left);
    }

    TreeNode* convertBST(TreeNode* root) {
        pre = 0;
        helper(root);
        return root;
    }
};


int main()
{



    system("pause");
    return 0;
}
