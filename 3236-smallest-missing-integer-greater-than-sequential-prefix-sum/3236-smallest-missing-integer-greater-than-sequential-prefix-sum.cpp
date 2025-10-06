class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int k = 1;
        while (k < nums.size() && nums[k] == nums[k - 1] + 1) {
            sum += nums[k];
            k++;
        }
        sort(nums.begin(),nums.end());
        for(int i = k-1; i< nums.size(); i++){
            if(sum == nums[i]){
                sum++;
            }
        }

        return sum;
    }
};
