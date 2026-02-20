
# Complexity
- Time complexity:O(n)

- Space complexity:O(1)

# Code
```c []
int maxProfit(int* prices, int pricesSize) {
    int profit = 0,maxprofit = 0,buy = prices[0];
    for(int i = 1;i < pricesSize;i++)
    {
       if(prices[i] < buy)
            {
                buy = prices[i];
                continue;
            }
        profit = prices[i] - buy;
        if(profit > maxprofit)
            maxprofit = profit;
    }
    return maxprofit;  
}
```
