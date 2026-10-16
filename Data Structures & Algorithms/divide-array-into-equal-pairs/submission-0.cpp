class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }

        for (const auto& [val, count] : counts) {
            if ( count % 2 !=  0) {
                return false;
            }
        }
        return true;
    }
};