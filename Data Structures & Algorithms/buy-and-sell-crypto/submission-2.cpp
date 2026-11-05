class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int maxP = 0;

        while(sell < prices.size()){
            int profit = prices[sell] - prices[buy];
            maxP = max(maxP, profit);

            if(prices[sell] < prices[buy]){
                buy = sell;
            }

            sell++;
        }

        return maxP;
    }
};
