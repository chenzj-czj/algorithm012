class Solution {
public:
    int trap(vector<int>& height) {
        int current = 0;
        stack<int> stk;
        int res = 0;
        while (current < height.size()) {
            while (!stk.empty() && height[current] > height[stk.top()]) {
                int tmp = stk.top();
                stk.pop();
                if (stk.empty()) {
                    break;
                }
                int distance = current - stk.top() - 1;
                int h = min(height[current], height[stk.top()]) - height[tmp];
                res += distance * h;
            }
            stk.push(current++);
        }
        return res;
    }
};