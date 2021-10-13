import sys

def kth_no_not_divisible(n,k):
    low = 1
    high = sys.maxsize
    x = 0
    while (low <= high):
        mid = int(low+(high-low)/2)
        result = int(mid - mid / n)
        if (result > k):
            high = mid - 1
            
        elif (result < k):
            low = mid + 1
            
        else:
            x = mid
            high = mid - 1
    return x-1
    
n=int(input("enter value of n: "))
k=int(input("enter value of k: "))
print("\nkth number is: ",kth_no_not_divisible(n, k))
