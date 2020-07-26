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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> map;
        for (int i = 0; i < inorder.size(); i++) {
            map[inorder[i]] = i;
        }
        return helper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, map);
    }

    TreeNode* helper(vector<int>& preorder, int pre_start, int pre_end, 
    vector<int>& inorder, int in_start, int in_end, unordered_map<int, int>& map) {
        if (pre_start > pre_end) {
            return NULL;
        }

        int root_val = preorder[pre_start];
        int in_root_index = map[root_val];
        int num = in_root_index - in_start;
        TreeNode* node = new TreeNode(root_val);

        node->left = helper(preorder, pre_start+1, pre_start+num, inorder, in_start, in_root_index-1, map);
        node->right = helper(preorder, pre_start+num+1, pre_end, inorder, in_root_index+1, in_end, map);

        return node;
    }
};