class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1 || nums.size() == 0) return nums.size();

        int k = 1;
        int tmp = nums[0];
        for(int i = 1; i < nums.size();i++){
            if(nums[i] != tmp){
                nums[k] = nums[i];
                tmp = nums[i];
                k++;
            }
        }
        return k;
    }
};