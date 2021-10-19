#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n) 
{ 
   int dp[1001][1001] = {0};
   
   for(int i=0;i<=n;i++){
       
       for(int j=0;j<=W;j++){
           
          if((i-1)<0){
            continue;
          }
          else if((wt[i-1])<=j){
               
              int op1 = dp[i-1][j-wt[i-1]] + val[i-1];
               
              int op2 = dp[i-1][j];
               
              dp[i][j] = max(op1,op2);
          }
          else{
              dp[i][j] = dp[i-1][j];
          }
        
       }
   }
   
   return dp[n][W];
}

int main()
{
    int W = 50, wt[] = {10,20,30}, val[] = {60,100,120};

    cout<<knapSack(W, wt, val, 3);
}


