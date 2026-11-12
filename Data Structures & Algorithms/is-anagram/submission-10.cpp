class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sS, tT;

        for (auto i : s) {
            sS[i]++;
        }

        for (auto i : t) {
            tT[i]++;
        }

        return sS == tT;

    }
};
