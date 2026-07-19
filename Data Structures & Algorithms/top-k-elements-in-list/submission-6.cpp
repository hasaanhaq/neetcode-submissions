class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;

        for(int num : nums){
            map[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);
        for(auto x : map){
            bucket[x.second].push_back(x.first);
        }

        vector<int> res;

        for(int i = bucket.size() - 1; res.size() < k; --i){
            for(int num : bucket[i]){
                res.push_back(num);
            }
        }

        return res;
    }
};
