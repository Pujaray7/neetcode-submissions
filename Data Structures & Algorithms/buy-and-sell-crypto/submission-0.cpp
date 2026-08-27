class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = prices[0];
        int maxProfit =0;
        for(int i =1; i<prices.size(); i++){
            int profit = prices[i]-minP;
            maxProfit = max(profit,maxProfit);
            minP = min(minP, prices[i]);
        }
        return maxProfit;
    }
};
