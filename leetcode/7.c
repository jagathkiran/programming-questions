int maxProfit(int *prices, int pricesSize) {
  int min = 0, max_profit = 0, profit = 0, buy = 0;

  for (int i = 1; i < pricesSize; i++) {
    if (prices[i] < prices[min]) {
      min = i;
    }

    if (i != buy) {
      profit = prices[i] - prices[buy];
    }

    if (profit <= 0) {
      buy = min;
    }

    if (profit > max_profit) {
      max_profit = profit;
    }
  }
  return max_profit;
}
