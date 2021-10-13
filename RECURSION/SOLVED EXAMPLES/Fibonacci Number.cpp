// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
  
// eg:
// Input: n = 3
// Output: 2
// Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.


#include <iostream>
#include<vector>
using namespace std;

int fiboo(int n,vector<int>&dp){
        if(n<=1){
            return n;
        }
        if(dp[n]!=0){
            return dp[n];
        }
        int l=fiboo(n-1,dp);
        int r=fiboo(n-2,dp);
        return dp[n]=l+r;
    }
    int main() {
        int n;
        cin>>n;
        vector<int>dp(n+1,0);
        cout<<fiboo(n,dp)<<endl;
      
        return 0;
        
    }
