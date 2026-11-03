class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for(auto str : strs){
            string key = str;
            sort(key.begin(), key.end());

            res[key].push_back(str);
        }

        vector<vector<string>> result;

        for(auto pair : res){
            result.push_back(pair.second);
        }

        return result;
    }
};
