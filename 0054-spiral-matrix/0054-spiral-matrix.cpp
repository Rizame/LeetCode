class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int size = m*n;
    vector<int> result;
    for(int i = 0; result.size() < size;i++){
        for(int mi = i; mi < n-i;mi++){
            result.push_back(matrix[i][mi]);
        }
        for(int ni = i+1; ni < m-i;ni++){
            result.push_back(matrix[ni][n-i-1]);
        }
        if (i < m - i - 1) {
            for (int mi = n - i - 2; mi >= i; mi--) {
                result.push_back(matrix[m - i - 1][mi]);
            }
        }

        // Traverse from bottom to top along the left column (only if there's still a column)
        if (i < n - i - 1) {
            for (int ni = m - i - 2; ni >= i + 1; ni--) {
                result.push_back(matrix[ni][i]);
            }
        }
    }
    return result;
}
};