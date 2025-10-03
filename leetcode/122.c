// 122. Best Time to Buy and Sell Stock II
int maxProfit(int *prices, int pricesSize) {
  int total_profit = 0, profit = 0, buy = 0;
  for (int i = 1; i < pricesSize; i++) {
    if (i != buy) {
      profit = prices[i] - prices[buy];
      if (profit > 0) {
        total_profit += profit;
      }
      buy = i;
    }
  }
  return total_profit;
}
