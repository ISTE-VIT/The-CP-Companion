def Tribonacci(n) :
 
    dpt =[0]*n
    dpt[0]=0; 
    dpt[1]=0;
    dpt[2]=1;
 
    for i in range(3,n) :
        dpt[i] = dpt[i - 1] + dpt[i - 2] + dpt[i - 3];
    print(dpt[-1])
         
n = int(input("Enter the value of n:"))
Tribonacci(n)