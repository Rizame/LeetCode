class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3) return n;
        
        long long ways = 0;
        int ones = n % 2;
        int twos = (n - ones) / 2;

        while (twos >= 0) {
            int totalSteps = ones + twos;
            
            long long result = 1;
            for(int i = 0; i < ones; i++){
                result *= (totalSteps - i);
                result /= (i + 1);
            }
            
            ways += result;

            ones += 2;
            twos--;
        }
        return (int)ways;
    }
};