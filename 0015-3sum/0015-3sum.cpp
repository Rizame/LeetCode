class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            vector<vector<int>> temp = twoSum(nums, -nums[i], i);
            if(!temp.empty()) res.insert(res.end(), temp.begin(), temp.end());
        }
        return res;
    }
    vector<vector<int>> twoSum(std::vector<int>& nums, int target, int targetId) {
        std::unordered_map<int, int> seen;
        vector<vector<int>> res;
        for (int i = targetId+1; i < nums.size(); ++i) {
            if(i == targetId) continue;
            int diff = target - nums[i];
            if (seen.count(diff)) {
                res.push_back({nums[seen[diff]], nums[i], -target});
                while (i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
            }
            seen[nums[i]] = i;
        }
        return res;
    }
};