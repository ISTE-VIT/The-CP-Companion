def lazy(n):
    if n == 0:
        return [0]
    else:
        return [n] + lazy(n-1) + [n]

n = int(input())
print(*lazy(n))