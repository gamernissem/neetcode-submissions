class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;

        
        for (int i = 0; i < nums.size(); i++) {
            int d = target - nums[i];

            if (hashmap.contains(d)) {
                return {hashmap[d], i};
            }
            hashmap[nums[i]] = i;
        }

        return {};
    }
};
