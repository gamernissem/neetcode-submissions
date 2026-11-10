class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> sSeen;
        unordered_map<char, int> tSeen;

        for (int i = 0; i < s.size(); i++){
            sSeen[s[i]]++;
            tSeen[t[i]]++;
        }

        return sSeen == tSeen;

    }
};
