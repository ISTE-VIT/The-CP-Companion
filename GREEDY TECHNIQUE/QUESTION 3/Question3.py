a=input()
l=list(map(int,a[1:-1].split(', ')))
extra=sum(l)%len(l)         
print(max(len(l)-extra,extra))