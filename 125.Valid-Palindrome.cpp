class Solution {
public:
    bool isPalindrome(string s) {
       
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !isalnum(c); 
        }), s.end());
       
        string p = s;
        reverse(p.begin(), p.end());

        return s == p;
    }
};
