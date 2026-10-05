class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //Create hashmap to count number of times int element appeared
        unordered_map<int, int> counts;

        //For count in the array nums
        for (int c : nums) {
            counts[c]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto pair : counts) {
            int num = pair.first;
            int freq = pair.second;
            buckets[freq].push_back(num);

        }

        vector<int> result;
        for (int freq = buckets.size() - 1; freq >= 1; --freq) {
            for (int num : buckets[freq]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        return result;
    }
};
