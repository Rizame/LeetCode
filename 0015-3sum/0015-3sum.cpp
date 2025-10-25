class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        //-4, -1, -1, 0, 1, 2
        for (int i = 0; i < nums.size(); i++) {
             if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i+1;
            int right = nums.size()-1;
            while(left < right){
                int target = -nums[i];
                int sum = nums[left] + nums[right];
                if(sum > target)right--;
                else if(sum < target) left ++;
                else {
                    res.push_back({-target, nums[left], nums[right]});
                    while(left + 1 < right && nums[left] == nums[left+1]) left++;
                    while(right - 1 > left && nums[right] == nums[right-1]) right--;
                    left++;
                    right--;
                }
            }
        }
        return res;
    }
};