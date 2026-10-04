class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> s_vec(s.begin(), s.end());
        vector<char> t_vec(t.begin(), t.end());

        sort(s_vec.begin(), s_vec.end());
        sort(t_vec.begin(), t_vec.end());

        if (s_vec == t_vec){
            return true;
        }
        return false;
    }
};
