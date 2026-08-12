class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int L=0;
        int MAX_profit=0;
        for(int R=1;R<prices.size();R++) {
            if(prices[L]<prices[R]) {
                int current_profit = prices[R] - prices[L];
                    MAX_profit=max(current_profit,MAX_profit);
            }
            
            else{
                L=R;
            }
        }
     return MAX_profit;

        }
};