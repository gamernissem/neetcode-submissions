class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> sSeen;
        unordered_map<char, int> tSeen;

        for (int count : s) {
            sSeen[count]++;
        }

        for (int count : t) {
            tSeen[count]++;
        }

        if (sSeen == tSeen) {
            return true;
        }

        return false;
    }
};
