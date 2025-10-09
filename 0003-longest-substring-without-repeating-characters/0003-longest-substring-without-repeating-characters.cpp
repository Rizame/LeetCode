class Solution {
public:
int lengthOfLongestSubstring(string s) {
            unordered_map<char, int> um;
            char c;
            int max = 0;
            int res=0;
            int i = 0;
            int k = 0;
            while(k < s.size()){
                i = k;
                c = s[k];
                while(c != '\0'){
                    um[c]++;
                    if(um[c] > 1){
                        max = 0;
                        um.clear();
                        break;
                    }
                    else{
                        max++;
                    }
                    if(max > res)res = max;
                    i++;
                    c = s[i];
                }
                k++;
            }
            return res;
    }
};