class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        if(spells.size()== 0 || potions.size()==0) return {};
        vector<int> res(spells.size(), 0);
        std::sort(potions.begin(), potions.end(), [](int a, int b){return a < b;});
        for(int i = 0; i < spells.size();i++){
            long long minVal = ceil((double)success/spells[i]);
            int lowerBound = findLower(potions, minVal);
            res[i] = potions.size()-lowerBound;
        }

        return res;
    }

    int findLower(vector<int>& potions, long long minVal){
        int low = 0;
        int high = potions.size()-1;
        while(low <= high){
            int mid = (low+high) / 2;
            if(potions[mid] >= minVal) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};