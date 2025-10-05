class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size()==1) return nums[0] +1;
        vector<int> seq;
        seq.push_back(nums[0]);
        int i = 1;
        while(i < nums.size()){
            if(nums[i] != (seq[i-1] + 1))break;
            seq.push_back(nums[i]);
            i++;
        }
        i = 0;
        int sum = seq.size()!=1 ? std::accumulate(nums.begin(), nums.begin()+seq.size(), 0) : seq[0]+1;
        auto it = std::find(nums.begin()+seq.size(),nums.end(), sum);
        if(it == nums.end()){
           return sum;
        }
        while(it != nums.end()){
            i++;
            it = std::find(nums.begin()+seq.size(), nums.end(), sum+i);
        }
        return sum + i;
    }
};