#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printtable(int a, int i)
{
    if (i<=10)
    {
        printf("%d x %d = %d", a,i,(a*i));       
        printtable(a,++i);
    }

}


int main()
{
    int a, i = 1;
    scanf("%d",&a);
    printtable(a,i);
    return 0;
}