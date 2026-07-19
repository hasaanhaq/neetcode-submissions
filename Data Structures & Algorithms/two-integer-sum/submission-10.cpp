class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numMap;
        
        for(int i = 0; i < nums.size(); i++){
            if(numMap.count(target - nums[i])){
                return {numMap[(target - nums[i])], i};
            }else{
                numMap[nums[i]] = i;
            }
        }

        return{};
        
        
    }

    // add values to the map based on 2 cases:
    // case 1: if the target - nums[i] is in our map.keys(), 
    // then we have a solution and we return.
    // else: add to map, proceed on the next iteration

};


