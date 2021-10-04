#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define vpii vector < pair <int,int> >
#define pb(x) push_back(x)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define ff first
#define ss second
#define lc(p) (p << 1)
#define rc(p) (p << 1) | 1
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n]
#define range(a, b) substr(a, b - a + 1)
#define trace(x) cerr << #x << ": " << x << endl
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define input(arr,n) FOR(i,0,n) cin>>a[i]
#define FOR(i,k,n) for ( int i=k; i<n; i++ )
#define ROF(i,k,n) for ( int i=k; i>n; i-- )
#define ll long long
#define casePrint(x,y) cout<<"Case #"<<x<<": "<<y;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

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
        cerr<<"Index "<<i<<": "<<dp[i]<<endl;
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