class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) return false; 

        std::stack<char> st; 
        
        for (char c : s) {
        
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
               
                if (st.empty()) return false;
                
               
                if (!match(st.top(), c)) return false;

               
                st.pop();
            }
        }
        
        return st.empty();
    }

    bool match(char s, char e) {
        return (s == '(' && e == ')') || 
               (s == '{' && e == '}') || 
               (s == '[' && e == ']');
    }
};