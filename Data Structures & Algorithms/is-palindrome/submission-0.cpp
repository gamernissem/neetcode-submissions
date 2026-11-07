class Solution {
public:
    bool isPalindrome(string s) {
        int a = 0, b = s.length() - 1;

        
        while (a < b) {
            while (a < b && !alphaNum(s[a])) {
                a++;
            } 
            while (b > a && !alphaNum(s[b])) {
                b--;
            }
            
            if (tolower(s[a]) != tolower(s[b])) {
                return false;
            }
            a++;
            b--;
        }

        return true;

        
    }

    bool alphaNum(char c) {
            return (c >= 'A' && c <= 'Z' ||
                    c >= 'a' && c <= 'z' ||
                    c >= '0' && c <= '9');
        }
};
