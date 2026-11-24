class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0; int r = numbers.size() - 1;

        while ( l < r ) {
            int curSum = numbers[l] + numbers[r];

            if (curSum == target) {
                vector<int> result = {l + 1, r + 1};
                return result;
            } else if (curSum > target) {
                r--;
            } else if (curSum < target) {
                l++;
            }
        }
    }
};
