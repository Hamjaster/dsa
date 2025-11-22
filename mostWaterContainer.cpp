#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> h = {1, 5, 7, 2, 9};

    int lp = 0;
    int rp = h.size() - 1;
    cout << "\nchecking " << lp << " and " << rp;
    int maxWater = 0;
    while (rp > lp)
    {
        int width = rp - lp;
        int height = min(h[rp], h[lp]);
        maxWater = max(width * height, maxWater);

        if (h[rp] > h[lp])
        {
            lp++;
        }
        else
        {
            rp--;
        }
    }
    cout << maxWater;
    return 0;
}