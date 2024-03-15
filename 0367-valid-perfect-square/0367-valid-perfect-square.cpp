class Solution {
public:
    bool isPerfectSquare(int num) {
        int odd = 1;
        
        while (true) {
            num -= odd;
            odd += 2;

            if (num == 0) {
                return true;
            } else if (num < 0) {
                return false;
            }
        }
    }
};