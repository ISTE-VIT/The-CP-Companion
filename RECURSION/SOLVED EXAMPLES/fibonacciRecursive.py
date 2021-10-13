def printFibonacci(n1,n2,count):
    n3=0
    if count>0:
        n3 = n1 + n2    
        n1 = n2    
        n2 = n3
        print(n3,end=" ")
        count-=1
        printFibonacci(n1,n2,count)   


n=int(input())
if n==1:
    print("0")
elif n==2:
    print("0 1",end=" ")
else:
    count=2
    print("0 1",end=" ")
    printFibonacci(0,1,n-2)

