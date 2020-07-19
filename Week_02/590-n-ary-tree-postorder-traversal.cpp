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
    vector<int> postorder(Node* root) {
        vector<int> result;
        if (root == NULL) {
            return result;
        }
        stack<Node*> stk;
        stack<Node*> stk2;
        stk.push(root);
        while (!stk.empty()) {
            Node* cur = stk.top();
            stk.pop();
            stk2.push(cur);
            for (int i = 0; i < cur->children.size(); i++) {
                stk.push(cur->children[i]);
            }
        }
        while (!stk2.empty()) {
            result.push_back(stk2.top()->val);
            stk2.pop();
        }
        return result;
    }
};