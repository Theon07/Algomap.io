#include "../Headers/ArrayAndString.h"

int maxProfit(int *prices, int pricesSize)
{
    int profit = 0;
    int curr_min = prices[0];
    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < curr_min)
        {
            curr_min = prices[i];
        }
        else if ((prices[i] - curr_min) > profit)
        {
            profit = prices[i] - curr_min;
        }
    }
    return profit;
}