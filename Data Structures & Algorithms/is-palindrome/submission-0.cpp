class Solution {
public:
    bool isPalindrome(string s) {
        string copy = "";
        for(char c:s)
        {
            if((c >= 'A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')){
                if((c >= 'A' && c<='Z') || (c>='a' && c<='z')) c = tolower(c);
                copy+=c;
            }
        }
        string copy2 = copy;
        reverse(copy2.begin() , copy2.end());
        return copy2 == copy;
    }
};
