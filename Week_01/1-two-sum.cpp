class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            if (hash[temp]) {
                res.push_back(i);
                res.push_back(hash[temp]-1);
                break;
            }
            hash[nums[i]] = i+1;
        }
        return res;
    }
};