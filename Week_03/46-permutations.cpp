class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums, 0);
        return result;
    }

    void helper(vector<int>& nums, int level) {
        if (level == nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int i = level; i < nums.size(); i++) {
            swap(nums[i], nums[level]);
            helper(nums, level+1);
            swap(nums[i], nums[level]);
        }
    }
};