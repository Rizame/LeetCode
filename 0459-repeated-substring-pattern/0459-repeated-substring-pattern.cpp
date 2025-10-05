class Solution {
public:
    bool repeatedSubstringPattern(const std::string& s) {
    int n = s.length();
    if (n <= 1) return false;

    for (int len = 1; len <= n / 2; len++) {
        if (n % len != 0) continue;

        int i;
        for (i = len; i < n; i++) {
            if (s[i] != s[i % len]) break; 
        }

        if (i == n) return true; 
    }

    return false; 
}
};