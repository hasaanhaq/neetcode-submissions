class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char,int> Ss;
        unordered_map<char,int> Tt;

        for(char something : s){
            Ss[something]++;
        }

        for(char somethingElse : t){
            Tt[somethingElse]++;
        }

        return Ss == Tt;
    }
};
