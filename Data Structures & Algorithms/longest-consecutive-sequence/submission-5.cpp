class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        for(int i = 0; i < nums.size(); i++){
            s.insert(nums[i]);
        }

        int longest = 0;

        for(int n : s){
            if(!s.count(n-1)){
                int length = 1;
                while(s.count(n+length)){
                    length++;
                }
                longest = max(longest, length);
            }
        }

        return longest;
    }
};
