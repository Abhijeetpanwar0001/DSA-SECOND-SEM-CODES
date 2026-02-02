//You are given an array prices where prices[i] is the price of a given stock on the ith day.
//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


#include <stdio.h>

int maxProfit(int prices[], int n) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        // Update minimum price
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
        // Calculate profit
        else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int main() {
    int n;
    scanf("%d", &n);

    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    printf("%d", maxProfit(prices, n));
    return 0;
}
