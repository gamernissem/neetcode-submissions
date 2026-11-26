class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for (string s : strs) {
            encoded_string.append(to_string(s.length()));
            encoded_string.push_back('#');
            encoded_string.append(s);
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;

        int i = 0;

        while ( i < s.length()) {
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            decoded_strs.push_back(s.substr(j + 1, len));

            i = j + 1 + len;
        }

        return decoded_strs;
    }
};
