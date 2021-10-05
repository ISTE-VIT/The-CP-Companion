number=input()
ans=0
i=0
while(i<len(number)):
    if number[i]=='8':
        ans+=1
        if number[i:i+2]=='99':
            ans+=2
            i+=2
        elif number[i+1]=='9':
            ans+=1
            i+=1
    i+=1        
if ans==len(number):
    print("YES")
else:
    print("NO")
    
