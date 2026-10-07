#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        // Update the minimum buying price
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        // Calculate today's profit
        int profit = prices[i] - minPrice;

        // Update maximum profit
        if (profit > maxProfitValue)
        {
            maxProfitValue = profit;
        }
    }

    return maxProfitValue;
}

int main()
{
    int n;

    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter stock prices: ";

    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    int result = maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}