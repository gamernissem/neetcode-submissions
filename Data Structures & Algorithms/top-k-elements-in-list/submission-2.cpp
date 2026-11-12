class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;

        for (int n : nums) {
            counts[n]++;
        }

        vector<vector<int>> buckets(nums.size() +1);
        for (const auto& [num, freq] : counts) {
            buckets[freq].push_back(num);
        }

        vector<int> results;
        for (int fre = buckets.size() - 1; fre > 0; --fre) {
            for (int num : buckets[fre]) {
                results.push_back(num);
                if (results.size() == k) {
                    return results;
                }
            }
            
        }
        return results;
    }
};
