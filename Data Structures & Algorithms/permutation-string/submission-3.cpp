class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> count;
        unordered_map<char,int> count2;

        for(char c : s1){
            count[c]++;
        }

        int left = 0;
        for(int right = 0; right < s2.size(); right++){
            count2[s2[right]]++;

            if(right - left + 1 > s1.size()){
                count2[s2[left]]--;

                if(count2[s2[left]] == 0){
                    count2.erase(s2[left]);
                }
                left++;
            }

            if(count == count2){
                return true;
            }
        }

        return false;
    }
};
