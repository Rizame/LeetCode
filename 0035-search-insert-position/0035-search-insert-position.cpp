class Solution {
public:
int searchInsert(std::vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int half = (low + high) / 2;
            if(nums[half] == target) return half;
            if(nums[half] > target) high = half-1;
            else low = half+1;
        }
        return low;

    }
};