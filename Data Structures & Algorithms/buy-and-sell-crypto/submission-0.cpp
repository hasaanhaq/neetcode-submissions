class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int maxP = 0;

        while(sell < prices.size()){
            if(prices[buy] < prices[sell]){
                int profit = prices[sell] - prices[buy];
                maxP = max(maxP, profit);
            }else{
                buy = sell;
            }
            sell++;
        }
        return maxP;
    }
};
