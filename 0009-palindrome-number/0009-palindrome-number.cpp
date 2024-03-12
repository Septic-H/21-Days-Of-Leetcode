class Solution {
public:
    bool isPalindrome(int x) {
        // check if x is negative or has a 0 at the end
        if (x < 0) {
            return false;
        }

        long long reversed_int = 0;
        long long temp_x = x;

        while (temp_x > 0) {
            int digit = temp_x % 10;
            reversed_int = reversed_int * 10 + digit;
            temp_x /= 10;
        }

        return x == reversed_int;
    }
};