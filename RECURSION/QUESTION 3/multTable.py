def table(n,j=1):
    if(j>10):
        return
    else:
        print(n,'x',j,'=',n*j)
        table(n,j+1)

n = int(input())
table(n)