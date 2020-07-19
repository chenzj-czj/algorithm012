class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, int> map;
        int index = 0;
        for (int i = 0; i < strs.size(); i++) {
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            if (map.find(tmp) != map.end()) {
                result[map[tmp]].push_back(strs[i]);
            }
            else {
                vector<string> vec;
                vec.push_back(strs[i]);
                result.push_back(vec);
                map[tmp] = index++;
            }
        }
        return result;
    }
};