class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int left = 0;
        int maxL = 0;

        for(int right = 0; right < s.size(); right++){
            while(set.count(s[right])){
                set.erase(s[left]);
                left++;
            }
            set.insert(s[right]);

            maxL = max(maxL, right - left + 1);
        }

        return maxL;
    }
};
