#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
 
void tribo_seq(int n)
{
    int dp[n];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
 
    for (int i = 3; i <=n; i++)
    {
        dp[i] = dp[i - 1] +dp[i - 2] +dp[i - 3];
    }
    cout<<dp[n]<<endl;
}
 
int main()
{
    int n;
    cin>>n;
    tribo_seq(n);
    return 0;
}