class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char,int> strT;
        unordered_map<char,int> strS;

        for(char ss : s){
            strS[ss]++;
        }
        for(char tt : t){
            strT[tt]++;
        }

        return strS == strT;


    }
};
