class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        if(numRows == 1) return res;
        for(int i = 1; i < numRows;i++){
            res.push_back(vector<int>(i + 1, 1));
            for(int k = 0; k <i+1;k++){
                if(k == 0 || k == i) res[i][k] = 1;
                else{
                    res[i][k] = res[i-1][k-1] + res[i-1][k];
                }
            }
        }
        return res;
    }
};