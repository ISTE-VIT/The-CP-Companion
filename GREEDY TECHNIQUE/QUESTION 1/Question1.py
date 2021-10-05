a=input()
l=list(map(int,a[1:-1].split(', ')))
print((sum(l)-max(l))/(len(l)-1)+ max(l))