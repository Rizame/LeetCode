class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<vector<int>> res;
        res.push_back({1});
        if(rowIndex == 0) return res[0];
        for(int i = 1; i <= rowIndex;i++){
            res.push_back(vector<int>(i + 1, 1));
            for(int k = 0; k <i+1;k++){
                if(k == 0 || k == i) res[i][k] = 1;
                else{
                    res[i][k] = res[i-1][k-1] + res[i-1][k];
                }
            }
        }
        return res[rowIndex];
    }
};