class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int oldPrice = prices[0], profit = 0;
        for(int i = 1 ; i < prices.size() ; i++)
        {
            if(prices[i] < oldPrice) oldPrice = prices[i];
            else 
                profit = max(profit , prices[i] - oldPrice);
        }
        return profit;
        
    }
};
