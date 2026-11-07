class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numsSize = nums.size();
        vector<int> output(numsSize, 1);

        int prefix = 1;

        for (int i = 1; i < numsSize; i++) {
            output[i] = output[i - 1] * nums[i - 1];
        }

        int suffix = 1;
        for (int i = numsSize - 1; i >= 0; i--) {
            output[i] *= suffix;
            suffix *= nums[i];
        }
        return output;
    }
};
