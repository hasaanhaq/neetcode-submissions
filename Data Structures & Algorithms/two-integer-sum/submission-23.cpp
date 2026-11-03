class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> set;

        for(int i = 0; i < nums.size(); i++){
            if(set.count(target - nums[i])){
                return {set[target - nums[i]], i};
            }else{
                set[nums[i]] = i;
            }
        }
        return {};
    }
};
