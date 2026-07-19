class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char,int> sS;
        unordered_map<char,int> tT;

        for(char c : s){
            sS[c]++;
        }
        for(char c : t){
            tT[c]++;
        }

        return sS == tT;
    }
};
