"""
Sample Input:
5

Sample Output:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50

"""


#CODE
def mulTable(n,j):

    print(n,"x",j,"=",n*j)
    if(j>=10):
        return

    mulTable(n,j+1)

n=int(input())
mulTable(n,1)

