/*PROBLEM STATEMENT
Given a rod of length n inches and an array of prices that includes prices of all pieces of size smaller than n.
Determine the maximum value obtainable by cutting up the rod and selling the pieces.
length : 1   2   3   4   5   6   7   8  
price :  4   7   9   10  11  15  20  22
*/
#include <bits/stdc++.h>
using namespace std;
 
int Rodcutting(int price[], int n)
{
   
   int i, j;
   int val[n+1];
   val[0] = 0;
 
   for (i = 1; i<=n; i++)
   {
       int max_val = INT_MIN;
       for (j = 0; j < i; j++)
         max_val = max(max_val, price[j] + val[i-j-1]); 
       val[i] = max_val;
   }
 
   return val[n];
}

int main()
{
    int arr[] = {4,   7 ,  9 ,  10,  11 , 15 , 20 , 22};
    int n= sizeof(arr)/sizeof(arr[0]);  //length of array
    int ans= Rodcutting(arr, n);
    cout<<"Maximum value that you could get is:"<<ans;
    
    return 0;
}
