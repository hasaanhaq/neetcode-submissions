class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char,int> salid;
        unordered_map<char,int> talid;

        for(int i = 0; i < s.length(); i++){
            salid[s[i]]++;
            talid[t[i]]++;
        }

        return salid == talid;

    }
};
