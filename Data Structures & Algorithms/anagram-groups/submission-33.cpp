class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;

        for(auto& str : strs){
            int count[26] = {0};

            for(char c : str){
                count[c - 'a']++;
            }

            string key;

            for(int i = 0; i < 26; i++){
                key += "#" + to_string(count[i]);
            }
            res[key].push_back(str);
        }

        vector<vector<string>> result;

        for(auto pairs : res){
            result.push_back(pairs.second);
        }
        return result;
    }
};
