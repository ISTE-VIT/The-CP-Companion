n = int(input())
ar = list(map(int,input().split()))
ar.sort(reverse=True)
neg = -1
for i in range(n):
    if ar[i]<0:
        neg = i
        break
prod1 = ar[0]*ar[1]*ar[2]*ar[3]*ar[4]
prod2 = ar[0]*ar[1]*ar[2]*ar[n-1]*ar[n-2]
prod3 = ar[0]*ar[n-1]*ar[n-2]*ar[n-3]*ar[n-4]
ans = -1
if neg == -1:
    ans = prod1
elif neg >= 3:
    ans = max(prod1,prod2)
else:
    ans = max(prod1,max(prod2,prod3))
print(ans)