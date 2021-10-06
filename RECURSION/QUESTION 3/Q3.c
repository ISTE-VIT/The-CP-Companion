#include<stdio.h>
void MultiplicationTable(int num, int i)
{
    printf("\n");
    printf("%d X %d = %d",num,i,num*i);
    if(i<10)
        return MultiplicationTable(num, i+1);
}
int main()
{
    int num,i=0;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Multiplication Table of %d is:",num);
    MultiplicationTable(num, 1);
}