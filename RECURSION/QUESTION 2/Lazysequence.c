#include<stdio.h>

void lazysequence(int n)
{
    if(n==0)
    {
        printf("%d ",n);
        return;
    }
        printf("%d ",n);
        lazysequence(n-1);
        printf("%d ",n);

}

int main()
{
    int n;
    scanf("%d",n);
    lazysequence(n);
}
