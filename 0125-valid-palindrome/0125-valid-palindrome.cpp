class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() <= 1) return true;
        string res;
        for (unsigned char c : s) {
        if (std::isalnum(c)) {
            res += std::tolower(c);  
        }
        }
        int low = 0;
        int high = res.size()-1;
        while(low < high){
            if(res[low] != res[high]) return false;
            low++;
            high--;
        }
        return true;
    }
};