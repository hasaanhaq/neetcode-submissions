class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;

        for(int num : nums){
            set.insert(num);
        }

        int longest = 0;

        for(int n : set){
            if(!set.count(n-1)){
                int current = n;
                int length = 1;

                while(set.count(current + 1)){
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};
