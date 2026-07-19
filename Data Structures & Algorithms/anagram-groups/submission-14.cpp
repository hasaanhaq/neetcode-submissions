class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for(const string& word : strs){
            int count[26] = {0};
            for(char c : word){
                count[c - 'a']++;
            }
            string key;
            for(int i = 0; i < 26; ++i){
                key += "!" + to_string(count[i]);
            }
            res[key].push_back(word);
        }
        vector<vector<string>> result;
        for(auto& entry : res){
            result.push_back(entry.second);
        }
        return result;
    }
};
