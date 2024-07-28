int longestSubsequence(const string &b, const string &a) {
    int m = b.size();
    int n = a.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Fill dp array
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (b[i - 1] == a[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Reconstruct the longest subsequence from the dp array
    string lcs;
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (b[i - 1] == a[j - 1]) {
            lcs.push_back(b[i - 1]);
            --i;
            --j;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            --i;
        } else {
            --j;
        }
    }

    // The lcs string is built in reverse order
    //reverse(lcs.begin(), lcs.end());
    return lcs.size();


//finds the longest common subsequence of string b in a.



// Use this recursive one....this is better and cleaner
// memoization used so a dp[m][n] ready
int lcs(char* X, char* Y, int m, int n,
        vector <vector<int> >& dp)
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return dp[m][n] = 1 + lcs(X, Y, m - 1, n - 1, dp);

    if (dp[m][n] != -1) {
        return dp[m][n];
    }
    return dp[m][n] = max(lcs(X, Y, m, n - 1, dp),
                          lcs(X, Y, m - 1, n, dp));
}

// time complexity is O(m*n)