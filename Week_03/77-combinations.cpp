class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> combine(int n, int k) {
        if (n <= 0 || k <= 0 || n < k) {
            return result;
        }
        
        vector<int> vec;
        helper(n, k, 1, vec);
        return result;
    }

    void helper(int n, int k, int start, vector<int>& vec) {
        if (vec.size() == k) {
            result.push_back(vec);
            return;
        }

        for (int i = start; i <= n; i++) {
            vec.push_back(i);
            helper(n, k, i+1, vec);
            vec.pop_back();
        }
    }
};