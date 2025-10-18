class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1,1);
        vector<int> temp(rowIndex+1,1);
        if(rowIndex == 0) return res;
        for(int i = 1; i <= rowIndex;i++){
            for(int k = 1; k < i;k++){
                res[k] = temp[k-1] + temp[k];
            }
            temp = res;
        }
        return res;
    }
};