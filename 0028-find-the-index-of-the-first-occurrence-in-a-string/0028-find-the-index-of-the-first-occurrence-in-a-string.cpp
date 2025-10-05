class Solution {
public:
    int strStr(const std::string& haystack, const std::string& needle) {
    if (needle.empty()) return 0;
    if (haystack.length() < needle.length()) return -1;

    for (size_t i = 0; i <= haystack.length() - needle.length(); i++) {
        size_t j = 0;
        while (j < needle.length() && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == needle.length()) {
            return i; 
        }
    }
    return -1; 
}
};