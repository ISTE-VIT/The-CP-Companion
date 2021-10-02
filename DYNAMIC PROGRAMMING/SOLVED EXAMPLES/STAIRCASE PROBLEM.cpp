#include <iostream>
using namespace std;
 

int main()
{
    // total number of stairs is stored in n
    int n = 6;
    // DP is an array that stores the number of ways to reach the ith stair.
    int dp[n];

    // Base cases :
    dp[0] = 1; // There is only one way to reach the first stair
    dp[1] = 2; // There are two ways to reach the second stair

    for(int i=2;i<n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout<<"The answer is : "<<dp[n-1];
 
}
