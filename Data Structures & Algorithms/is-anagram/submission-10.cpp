class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> SS;
        unordered_map<char,int> TT;

        for(char c : s){
            SS[c]++;
        }
        for(char c : t){
            TT[c]++;
        }

        return SS == TT;
    }
};
