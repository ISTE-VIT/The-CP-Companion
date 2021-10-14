import java.util.*;

class DPQ5{
static int solve(int n, int k, int mod, int dp[])
{
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;
	if (dp[n] != -1)
		return dp[n];
	int cnt = 0;
	for(int i = 2; i <= k; i += 2)
	{
		cnt = (cnt % mod + solve(n - i, k, mod,
			dp) % mod) % mod;
	}
	dp[n] = cnt;
	return cnt;
}
public static void main(String[] args)
{
	int mod = (int)(1e9 + 7);
	int n = 4, k = 2;
	
	int []dp = new int[n + 1];
	for(int i = 0; i < n + 1; i++)
		dp[i] = -1;
		
	int ans = solve(n, k, mod, dp);
	
	System.out.println(ans);
}
}
