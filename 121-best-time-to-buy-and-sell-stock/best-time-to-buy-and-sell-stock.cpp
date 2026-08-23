class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int L=0;
        int max_value=0;
        for(int R=1;R<prices.size();R++){
            if(prices[L]<prices[R]){
                int current=prices[R]-prices[L];
                max_value=max(max_value,current);
            }
            else {
                L=R;
            }
                
        }
        return max_value;
    }
   
};