/*
Problem - There are n stairs, a person standing at the bottom wants to reach the top. The person can climb k stairs at a time. Count the number of ways, the person can reach the top.
*/

#include <iostream>
using namespace std;

int topDown(int n, int k, int *dp) {
	// base case
	if (n == 0) {
		return dp[n] = 1;
	}

	if (n < 0) {
		return 0;
	}
	if (dp[n] != -1) {
		return dp[n];
	}

	// recurive case
	int ans = 0;
	for (int i = 1 ; i <= k ; i++) {
		ans += topDown(n - i, k, dp);
	}
	return dp[n] = ans;
}

int bottomUp(int n, int k) {
	int dp[1005];
	dp[0] = 1;

	for (int i = 1; i <= n ; i++) {
		int ans = 0;
		for (int j = 1 ; j <= k ; j++) {
			if (i >= j) {
				ans += dp[i - j];
			}
		}
		dp[i] = ans;
	}
	return dp[n];
}

int NStairOptimised(int n, int k) {
	int dp[1005];
	dp[0] = dp[1] = 1;

	for (int i = 2 ; i <= n ; i++) {
		if (i - k - 1 >= 0) {
			dp[i] = 2 * dp[i - 1] - dp[i - k - 1];
		}
		else {
			dp[i] = 2 * dp[i - 1];
		}
	}

	return dp[n];
}

int main() {

	int dp[1005];
	memset(dp, -1, sizeof(dp));
	int n, k; 
    cin >> n >> k;
	cout << topDown(n, k, dp);
	cout << endl;

	cout << bottomUp(n, k) << endl;
	cout << NStairOptimised(n, k) << endl;

	return 0;
}