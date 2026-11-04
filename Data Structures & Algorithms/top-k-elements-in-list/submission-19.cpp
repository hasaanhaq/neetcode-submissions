class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        /*
        vector tracking the number
        make a freq map
        add to freq map with val from map as key and key and val
        
        
        */

        unordered_map<int,int> count;
        vector<vector<int>> freq(nums.size() + 1);

        for(int num : nums){
            count[num]++;
        }

        for(auto entry : count){
            freq[entry.second].push_back(entry.first);
        }

        vector<int> res;

        for(int i = freq.size() - 1; i > 0; i--){
            for(auto num : freq[i]){
                res.push_back(num);
            }
            if(res.size() == k){
                return res;
            }
        }

        return res;
    }
};
