int binomial(int n, int k, int p) {
	vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
	for (int i = 0; i <= n; i++) {
		dp[i][0] = 1;
		if (i <= k) { dp[i][i] = 1; }
	}

	for (int i = 0; i <= n; i++) {
		for (int j = 1; j <= min(i, k); j++) {
			if (i != j) { 
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % p;
			}
		}
	}

	return dp[n][k];
}
// in O(n2) time using dp



int binomial(int n, int k, int p) {
	if (k == 0 || k == n) { return 1; }
	return (binomial(n - 1, k - 1, p) + binomial(n - 1, k, p)) % p;
}
// using recursion to calculate binomial coeff

/*DO not use this as this is slower
  WOn't work if constraints arre like 10^6*/