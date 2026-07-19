class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char,int> SS;
        unordered_map<char,int> TT;

        for(char ss : s){
            SS[ss]++;
        }

        for(char tt : t){
            TT[tt]++;
        }

        return SS == TT;
    }
};
