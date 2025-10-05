class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        int half = str.length() / 2;
        bool even = (str.length() % 2 == 0) ? true : false;
        int b = 0;
        int e = str.length()-1;
        while(str[b] == str[e]){
            if(even){
                if(e-b == 1) return true;
            }
            else{
                if(e==b) return true;
            }
            b++;
            e--;
        }
        return false;
    }
};