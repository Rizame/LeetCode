class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()== 1) return strs[0];
        auto shortestStringIt = std::min_element(strs.begin(), strs.end(),
                                             [](const std::string& a, const std::string& b) {
                                                 return a.length() < b.length();
                                             });
        std::string shortest = *shortestStringIt;
        int shortestLen = shortest.length();
        
        string ans = "";
        int i=0;
        while(i < shortestLen){
            char c = shortest[i];
            if (std::find_if(strs.begin(), strs.end(), [i, c](const std::string& a) { return a[i] != c; }) != strs.end())
    return ans;

            ans = ans + c;
            i++;
        }
        return ans;
    }
};