class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char,int> tt;
        unordered_map<char,int> ss;

        for(char c : t){
            tt[c]++;
        }
        for(char c : s){
            ss[c]++;
        }

        return tt == ss;
    }
};
