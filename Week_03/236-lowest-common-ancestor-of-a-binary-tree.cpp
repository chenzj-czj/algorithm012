/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == p || root == q) {
            return root;
        }
        if (root) {
            TreeNode* lNode = lowestCommonAncestor(root->left, p, q);
            TreeNode* rNode = lowestCommonAncestor(root->right, p, q);
            if (lNode && rNode) {
                return root;
            }
            else if (!lNode) {
                return rNode;
            }
            else {
                return lNode;
            }
        }
        return NULL;
    }
};