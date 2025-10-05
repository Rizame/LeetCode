class Solution {
public:
    std::string expandAroundCenter(const std::string& s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

std::string longestPalindrome(std::string s) {
    if (s.empty()) return ""; 
    if (s.size() == 1) return s; 
    
    std::string longest;
    
    for (int i = 0; i < s.size(); ++i) {
        std::string oddPalindrome = expandAroundCenter(s, i, i);
        if (oddPalindrome.size() > longest.size()) {
            longest = oddPalindrome;
        }
        std::string evenPalindrome = expandAroundCenter(s, i, i + 1);
        if (evenPalindrome.size() > longest.size()) {
            longest = evenPalindrome;
        }
    }
    
    return longest;
}
};