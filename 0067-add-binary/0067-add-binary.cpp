class Solution {
public:
    string addBinary(string a, string b) {
        int n = max(a.size(), b.size()) + 1;
        string res(n, '0');
        int i = a.size() - 1;
        int j = b.size() - 1;
        int k = n - 1; 
        int carry = 0;

        while(i >= 0 || j >= 0) {
            int abit = (i >= 0) ? a[i] - '0' : 0;
            int bbit = (j >= 0) ? b[j] - '0' : 0;

            int sum = abit ^ bbit ^ carry;
            carry = (abit + bbit + carry) / 2;

            res[k] = sum + '0'; 
            i--; j--; k--;
        }

        if(carry) res[k] = '1';
        else k++; 

        return res.substr(k);
    }
};