#include <iostream>
using namespace std;
 
int tribonacci_series(int n)
{
    int dp[n];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
 
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    return dp[n];
}
 
int main()
{
    int n;
    cin>>n;
    int ans = tribonacci_series(n);
    cout<<ans;
    return 0;
}
