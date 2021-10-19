#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) 
    {
        if (prices.size() < 2)
            return 0;
            
        int m = prices.size();
        int res = 0;
        int fmin = prices[0];
        int f[m] = {0};
        for (int i = 1; i < m; i++)
        {
            f[i] = max (f[i - 1], prices[i - 1] - fmin);
            fmin = min(fmin, prices[i - 1]);
        }

        int bmax = prices[m -1];
        for (int k = m - 1; k >= 0; k--)
        {
            res = max(res, bmax - prices[k] + f[k]);
            bmax = max(bmax, prices[k]);
        }

        return res < 0 ? 0 : res;
    }
};