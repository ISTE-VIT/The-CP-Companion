#include<iostream>
#include<vector>
using namespace std;

int find_max(int i, int sum, vector<int>& v,int k, vector<vector<int>>& dp)
{
 
    if (i == v.size())
        return 0;
 
    if (dp[i][sum] != -1)
        return dp[i][sum];
 
    int ans = 0;


    if ((sum + find_max(i + 1, sum, v, k,dp)) % k == 0)
        ans = find_max(i + 1, sum, v, k,dp);
     

    if((sum + v[i] + find_max(i + 1,(sum + v[i]) % k, v, k,dp)) % k == 0)
        ans = max(ans, v[i] + find_max(i + 1, (sum + v[i]) % k,v, k, dp));
     
 
    return dp[i][sum] = ans;
}


int main(){

    int n, m;
    cin >> n >> m;

    vector<int> v(m);
    for(int i=0; i<m; i++){
        cin >> v[i];
    }

    vector<vector<int>> dp(m, vector<int>(n+1, -1));
    int result = find_max(0, 0, v, n, dp);

    if(result == 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    return 0;

}