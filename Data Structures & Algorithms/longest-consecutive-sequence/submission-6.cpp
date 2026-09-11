class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //[1,2,3,4,5...]
        //maybe dupes in array like [1,2,3,3,4]
        //so remove dupes by putting input into a hashset
        
        unordered_set<int> n;
        for(int i = 0; i < nums.size(); i++){
            n.insert(nums[i]);
        }
        int longest = 0;

        for(int num : n){
            if(!n.count(num-1)){
                int length = 1;
                while(n.count(num + length)){
                    length++;
                }
                longest = max(longest, length);
            }

            
        }

        return longest;
    }
};
