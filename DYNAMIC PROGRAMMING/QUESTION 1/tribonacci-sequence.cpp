#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int,int> dp;

int Tribonacci(int n){
    if(dp[n]){
        return dp[n];
    }
    else{
        if(n==0 || n==1)
            return n;
        else if (n==2){
            return 1;
        }
        else{
            dp[n] = Tribonacci(n-1) + Tribonacci(n-2) + Tribonacci(n-3);
            return dp[n];
        }
    }
}

int main(){
    int n = 0;
    cin>>n;
    cout << Tribonacci(n);
}