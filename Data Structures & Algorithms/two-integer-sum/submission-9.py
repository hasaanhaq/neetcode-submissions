class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        hashmap = defaultdict(int)

        for i in range(len(nums)):
            if (target - nums[i]) in hashmap.keys():
                if i < hashmap[target - nums[i]]:
                    return [i, hashmap[target - nums[i]]]
                else:
                    return [hashmap[target - nums[i]], i]
            else:
                hashmap[nums[i]] = i