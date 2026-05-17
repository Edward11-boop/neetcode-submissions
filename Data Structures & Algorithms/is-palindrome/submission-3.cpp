class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int dr = s.length() - 1;
        while(st < dr)
        {
            while(!isalnum(s[st]) && st < s.length()) {st++;}
            while(!isalnum(s[dr]) && dr >= 0 ) {dr--;}
            if(tolower(s[st]) == tolower(s[dr])) {st++;dr--;}
            else return false;
        }

        return true;
    }
};
