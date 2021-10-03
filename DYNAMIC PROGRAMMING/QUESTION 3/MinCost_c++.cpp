
#include <iostream>
#include <vector>
using namespace std;
 
int MinCost(vector<int> v, int n)
{
    int dp[n];
    if (n == 1){
        return v[0];

    }
 
    dp[0] = v[0];
    dp[1] = v[1];
 

    for (int i = 2; i < n; i++) {
        dp[i] = min(dp[i - 1], dp[i - 2]) + v[i];
    }
    return min(dp[n - 2], dp[n - 1]);
}
 
// Driver Code
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout << MinCost(v, n);
    return 0;
}