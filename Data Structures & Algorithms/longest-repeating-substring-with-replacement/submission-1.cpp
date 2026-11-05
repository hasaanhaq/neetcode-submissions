class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int> count;
        int left=0;
        int maxL=0;

        for(int right = 0; right < s.size(); right++){
            count[s[right]]++;

            while(true){
                int maxF=0;

                for(auto& pair : count){
                    maxF = max(maxF, pair.second);
                }

                int windowSize=right-left+1;
                if(windowSize - maxF <= k){
                    break;
                }

                count[s[left]]--;
                left++;
            }
            maxL = max(maxL,right - left + 1);
        }
        return maxL;
    }
};
