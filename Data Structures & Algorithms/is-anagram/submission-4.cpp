class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> sVec (s.begin(), s.end());
        vector<char> tVec (t.begin(), t.end());

        sort(sVec.begin(), sVec.end());
        sort(tVec.begin(), tVec.end());

        if (sVec == tVec) {
            return true;
        }
        return false;
    }
};
