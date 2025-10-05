class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        int cand1 = 0, count1 = 0, cand2=0, count2=0;
        for(int i = 0; i < n;i++){
            if(nums[i]==cand1) count1++;
            else if(nums[i] == cand2) count2++;
            else if(count1==0){
                cand1=nums[i];
                count1=1;
            }
            else if(count2==0){
                cand2=nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for(int num: nums){
            if(num == cand1) count1++;
            else if(num == cand2) count2++;
        }
        if (count1 > n / 3) res.push_back(cand1);
        if (count2 > n / 3 && cand2 != cand1) res.push_back(cand2);
        return res;
    }
};