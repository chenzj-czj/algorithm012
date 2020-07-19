class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            if (map.find(temp) != map.end()) {
                result.push_back(map[temp]);
                result.push_back(i);
                break;
            }
            map[nums[i]] = i;
        }
        return result;
    }
};