class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int x : nums) {
            counts[x]++;
        }

        using Pair = pair<int, int>;
        //Using min-heap here we can avoid sorting through to find the smallest value each time instead we only need to replace the smallest number in the heap if we find a larger number
        priority_queue<Pair, vector<Pair>, greater<Pair>> minHeap;

        for (auto pair : counts) {
            int num = pair.first;
            int freq = pair.second;

            minHeap.push({freq, num});

            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return result;
    }
};