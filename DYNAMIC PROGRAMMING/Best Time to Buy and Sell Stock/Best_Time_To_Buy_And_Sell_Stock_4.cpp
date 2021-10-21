#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int maxProfit(int K, vector<int> &prices) 
    {
        int m = prices.size();
        if (K >= m / 2)
        {
            int res = 0;
            for (int i = 0; i < m - 1; ++i)
            {
                if (prices[i + 1] > prices[i])
                {
                    res += prices[i + 1] - prices[i];
                }
            }
            return res;
        }

        vector<vector<int>> f(m + 1, vector<int>(K + 1, INT_MIN));
        vector<vector<int>> g(m + 1, vector<int>(K + 1, INT_MIN));
        f[0][0] = 0;
        int res = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 0; j <= K; ++j)
            {
                f[i][j] = max(f[i - 1][j], g[i - 1][j] + prices[i - 1]);
                g[i][j] = g[i - 1][j];
                if (j > 0)
                    g[i][j] = max(g[i][j], f[i - 1][j - 1] - prices[i - 1]);
                res = max(res, f[i][j]);
            }
        }

        return res;
    }
};