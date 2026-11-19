int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0], best = 0;
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] - minPrice > best) best = prices[i] - minPrice;
        if (prices[i] < minPrice) minPrice = prices[i];
    }
    return best;
}
