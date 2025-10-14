/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isSameTree(root->left, root->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q){
        if(!p xor !q) return false;
        else if(!p && !q) return true;
        if(p->val != q->val) return false;
        if(!isSameTree(p->left, q->right)) return false;
        if(!isSameTree(p->right, q->left)) return false;
        return true;
    }
};