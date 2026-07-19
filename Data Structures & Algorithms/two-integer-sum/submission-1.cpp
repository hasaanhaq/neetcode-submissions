class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            numMap[nums[i]] = i;
        }

        for(int i = 0; i < n; i++){
            int diff = target - nums[i];
            if(numMap.count(diff) && numMap[diff] != i){
                return {i, numMap[diff]};
            }
        }
    return {};
        

    }
};
