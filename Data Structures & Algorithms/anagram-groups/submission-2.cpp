class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //Create a hashmap to store the information
        unordered_map<string, vector<string>> groups;

        //For each item from the input strs
        //Duplicate into new hashmap
        //Reorder the item with sort
        for (string s : strs){
            string key = s;

            sort(key.begin(), key.end());

            groups[key].push_back(s);
        }

        //Create new array for results (results contain multiple arrays)
        vector<vector<string>> result;

        //Unsure how this portion of code works
        for (auto& pair : groups) {
            result.push_back(pair.second);
        }

        return result;
    }
};
