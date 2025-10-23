class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        recursion(res, "", '(', n, 0, 0);
        return res;
    }
    void recursion(vector<string> &res, string curr, char c, int n, int l, int r){
        curr += c;
        c == '(' ? l++ : r++;
        if(curr.size()== n*2){
            res.push_back(curr);
            return;
        }
        if(l < n)recursion(res, curr, '(', n, l, r);
        if(r < l)recursion(res, curr, ')', n, l, r);
    }
};