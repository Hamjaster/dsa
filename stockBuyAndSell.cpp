#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int prices[6] = {20, 10, 5, 3, 2, 1};

    int bestBuy = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < 6; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            if (prices[i] > prices[j])
            {
                bestBuy = min(prices[j], bestBuy);
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            };
        };
    };
    cout << maxProfit;

    return 0;
}