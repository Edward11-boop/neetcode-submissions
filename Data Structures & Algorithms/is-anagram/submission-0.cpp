class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        else
            {   unordered_map<char,int> map;
                for(int c = 0 ; c < s.length() ; c++)
                    map[s[c]]++;
                
                for(int c = 0 ; c < t.length() ; c++) {
                    if(map[t[c]] == 0 ) return false;
                    map[t[c]]--;
                }
                return true;
            }
    }
};
