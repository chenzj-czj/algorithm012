/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        if(root == NULL) {
            return result;
        }

        queue<Node*> que;
        que.push(root);
        while (!que.empty()) {
            int size = que.size();
            vector<int> vec;
            while (size--) {
                Node* cur = que.front();
                que.pop();
                vec.push_back(cur->val);
                for (int i = 0; i < cur->children.size(); i++) {
                    que.push(cur->children[i]);
                }
            }
            result.push_back(vec);
        }
        return result;
    }
};