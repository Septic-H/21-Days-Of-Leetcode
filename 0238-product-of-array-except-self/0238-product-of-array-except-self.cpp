class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(), 1);

        // Calculate products of all elements to the left of each element
        int leftProduct = 1;
        for (int i = 1; i < nums.size(); i++) {
            leftProduct *= nums[i - 1];
            answer[i] *= leftProduct;
        }

        // Calculate products of all elements to the right of each element
        int rightProduct = 1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            rightProduct *= nums[i + 1];
            answer[i] *= rightProduct;
        }

        return answer;
    }
};