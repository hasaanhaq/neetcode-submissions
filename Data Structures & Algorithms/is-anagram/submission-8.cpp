class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> sMap;
        unordered_map<char,int> tMap;

        for(char ss : s){
            sMap[ss]++;

        }
        for(char tt : t){
            tMap[tt]++;
        }

        return sMap == tMap;


    }
};
