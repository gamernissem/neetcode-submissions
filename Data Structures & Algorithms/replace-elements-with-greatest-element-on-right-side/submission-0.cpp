class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int bigNum;

        for (int i = 0; i< arr.size(); i++) {
            arr[i] = 0;
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i] < arr[j]) {
                    arr[i] = arr[j];
                }
            }
        }
        arr.pop_back();
        arr.push_back(-1);

        return arr;
    }
};