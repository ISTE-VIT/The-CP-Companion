#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double powCompute(double x, int n)
    {
        if (n == 0)
        {
            return 1;
        }
        if (n == -1)
        {
            return 1 / x;
        }
        if (n % 2 == 0)
        {
            double y = powCompute(x, n / 2);
            return y * y;
        }
        else
            return x * powCompute(x, n - 1);
    }
};

int main()
{
    Solution S;
    cout << S.powCompute(3.2, 5);
}