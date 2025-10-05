class Solution {
public:
    map<char, int> dict = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int romanToInt(string s) {
        if(s.size() <= 0) return -1;
        int result = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (i + 1 < s.size() && dict[s[i]] < dict[s[i + 1]]) {
                result -= dict[s[i]];
            }
            else {
                result += dict[s[i]];
            }
        }
        return result;
    }
};