 int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        
        if(prices.size() <= 1)
            return 0;
        
        int max_profit = prices[1] - prices[0];
        int current_profit = max_profit;
        while(sell < prices.size()){
            if(prices[buy] > prices[sell]){
                buy = sell;
            }
            
            current_profit= prices[sell] - prices[buy];
            
            if(current_profit > max_profit){
                max_profit = current_profit;
            }
            sell++;    
        }
       return max_profit; 
    }