class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int prof = 0;
        for (int price : prices) {
            if (price < buy) buy = price;          
            else if (price - buy > prof) prof = price - buy; 
        }
        return prof;
}
};