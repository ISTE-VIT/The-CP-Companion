class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] - prices[i - 1] > 0)
            {
                max = max + (prices[i] - prices[i - 1]);
            }
        }
        return max;
    }
};