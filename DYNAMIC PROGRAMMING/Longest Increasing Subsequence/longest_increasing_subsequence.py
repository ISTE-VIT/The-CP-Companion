"""

* Author - Ayushman Chahar
* About - IT Junior, VIT Vellore

"""


def longest_inc_subsequence(arr, n):
    b = sorted(list(set(arr)))
    m = len(b)
    dp = [[-1 for _ in range(m + 1)] for _ in range(n + 1)]
    for i in range(n + 1):
        for j in range(m + 1):
            if i == 0 or j == 0:
                dp[i][j] = 0
            elif arr[i - 1] == b[j - 1]:
                dp[i][j] = 1 + dp[i - 1][j - 1]
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
    return dp[-1][-1]


def solve():
    arr = list(map(int, input().split()))
    print("Length of the longest increasing subsequence is ", longest_inc_subsequence(arr, len(arr)))


if __name__ == "__main__":
    solve()
