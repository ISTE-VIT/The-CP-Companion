#include <bits/stdc++.h>

using namespace std;


#define FOR(i,k,n) for ( int i=k; i<n; i++ )
#define mem(a,k) memset(a,k,sizeof(a))

int solve(int n){

    int dp[n+1];
    mem(dp,0);
    int steps[4] = {1,2,3,4};
    dp[0]=1;

    FOR(i,0,n+1)
    {
        for ( auto x : steps )
            if ( i-x>=0 )
                dp[i]+= dp[i-x];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n);
}

// dp array:
// Index 0: 1
// Index 1: 1
// Index 2: 2
// Index 3: 4
// Index 4: 8
// Index 5: 15
// Index 6: 29
// Index 7: 56
