class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int result = 0;
        // as every element appears twice except for one, XOR each element and store the
        // element that appears odd number of times in the result variable 
        for (int num : nums) {
            result ^= num;
        }

        return result;
    }
};