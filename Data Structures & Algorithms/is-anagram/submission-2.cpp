class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> S;
        unordered_map<char, int> T;

        for (int c: s){
            S[c]++;
        }
        for (int c : t){
            T[c]++;
        }
        return S == T;
    }
};
