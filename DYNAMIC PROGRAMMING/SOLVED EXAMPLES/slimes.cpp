/*
Problem:
There are N slimes lining up in a row. Initially, the i-th slime from the left has a size of ai.

Taro is trying to combine all the slimes into a larger slime. He will perform the following operation repeatedly until there is only one slime:
Choose two adjacent slimes, and combine them into a new slime. The new slime has a size of 
x+y, where x and y are the sizes of the slimes before combining them. Here, a cost of
x+y is incurred. The positional relationship of the slimes does not change while combining slimes.

Find the minimum possible total cost incurred.
*/
#include<bits/stdc++.h>
#define lld long long
#define MAX (lld)1e18+7
using namespace std;

lld res = 0;
lld recur(vector<lld>&v,lld l,lld r,vector<lld>&sum,vector<vector<lld>>&dp)
{
	if(l>=r)
		return 0;

	if(dp[l][r]!=-1)
		return dp[l][r];

	lld ans = MAX;
	for(lld i=l;i<r;i++)
	{
		ans = min(ans,recur(v,l,i,sum,dp)+recur(v,i+1,r,sum,dp)+sum[r+1]-sum[l]);
		
	}
	
	dp[l][r] = ans;
	return ans;
}

int main()
{
	lld n;
	cin>>n;
	std::vector<lld> v(n);
	std::vector<lld> sum(n+1);
	vector<vector<lld>>dp(n+1,vector<lld>(n+1,-1));
	for(lld i=0;i<n;i++)
		cin>>v[i];
	
	for(lld i=0;i<n;i++)
		sum[i+1] = sum[i]+v[i];

	lld l=0,r=n-1;
	cout<<recur(v,l,r,sum,dp)<<endl;
}