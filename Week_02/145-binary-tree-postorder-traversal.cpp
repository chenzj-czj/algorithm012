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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == NULL) {
            return result;
        }

        stack<TreeNode*> stk;
        stk.push(root);
        while (!stk.empty()) {
            TreeNode* cur = stk.top();
            if (cur == NULL) {
                stk.pop();
                result.push_back(stk.top()->val);
                stk.pop();
                continue;
            }
            stk.push(NULL);
            if (cur->right) {
                stk.push(cur->right);
            }
            if (cur->left) {
                stk.push(cur->left);
            }
        }
        return result;
    }
};