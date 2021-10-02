#include <iostream>
using namespace std;
 

int main()
{
    int money_in_house[] = {100, 150, 30, 200, 170};
    int n = 5;
    // dp array stores the maximum amount that can be stored till the ith house.
    int dp[n];
    // The max money that can be collected till 1st house is the amount in the first house only
    dp[0] = money_in_house[0];
    // The max money that can be collected till 2nd house is the max amount in the first house or second house
    dp[1] = max(money_in_house[0],money_in_house[1]);
    // As discussed earlier, for the ith house, we need to find the maximum amount that can be stored till i-2 th house + the amount in ith house
    // and compare it with the amount that can be collected till i-1th hosue
    for(int i=2;i<n;i++)
    {
        dp[i] = max(money_in_house[i] + dp[i-2],dp[i-1]);
    }
    cout<<"The answer is : " << dp[n-1];
 
}
