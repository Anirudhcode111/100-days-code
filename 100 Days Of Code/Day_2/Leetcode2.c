int maxProfit(int* prices, int pricesSize) {

    // initialize cheapest and maxProfit
    int cheapest = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        // profit logic
        int current_profit = prices[i]- cheapest;
        
        // update Maxprofit
        if(current_profit > maxProfit){
            maxProfit = current_profit;
        }

        // Update cheapest
        if(prices[i] < cheapest){
            cheapest = prices[i];
        }
          
    }

    return maxProfit;
}
