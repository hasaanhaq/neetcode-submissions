class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char,int> ss;
        unordered_map<char,int> tt;

        for(char c : s){
            ss[c]++;
        }
        for(char c : t){
            tt[c]++;
        }

        return ss == tt;
    }
};
