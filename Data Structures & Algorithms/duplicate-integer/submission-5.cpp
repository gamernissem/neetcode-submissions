class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int count: nums) {
            if(seen.contains(count)) {
                return true;
            }
            seen.insert(count);
        }
        return false;
    }
};