class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = nums[0];
        int minProduct = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int tempMax = maxProduct;
            maxProduct = max(nums[i], max(maxProduct * nums[i], minProduct * nums[i]));
            minProduct = min(nums[i], min(tempMax * nums[i], minProduct * nums[i]));
            result = max(result, maxProduct);
        }

        return result;
    }
};