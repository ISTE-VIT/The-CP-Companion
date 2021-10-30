def lcs(x, y, m, n):
    m = len(x)
    n = len(y)
    dp = [[None] * (n + 1) for i in range(m + 1)]
    for i in range(m + 1):
        for j in range(n + 1):
            if i == 0 or j == 0:
                dp[i][j] = 0
            elif x[i - 1] == y[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
    return dp[m][n]


def main():
    s1 = input()
    s2 = input()
    print(lcs(s1, s2, len(s1), len(s2)))


if __name__ == "__main__":
    main()
