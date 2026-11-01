class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_seen;
        unordered_map<char, int> t_seen;

        for (auto i : s) {
            s_seen[i]++;
        }

        for (auto i : t) {
            t_seen[i]++;
        }

        if ( s_seen == t_seen ) {
            return true;
        }

        return false;
    }
};
