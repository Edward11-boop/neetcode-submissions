class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string> > map;
        for(string word : strs )
        {
            string copy = word;
            sort(copy.begin(), copy.end());
            map[copy].push_back(word);
        }
        vector<vector<string>> result;
        for(auto& [key,value] : map)
            result.push_back(value);
        return result;

    }
};
