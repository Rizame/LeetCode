class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long sum = 0;
        for (char ch : columnTitle) {
            int value = ch - 'A' + 1;
            sum = sum * 26 + value;
        }
        return (int)sum;
    }
};