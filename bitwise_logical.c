#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,AND,OR,XOR;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    AND=n1 & n2;
    OR=n1 | n2;
    XOR= n1 ^ n2;
    printf("\nAND=>%d",AND);
    printf("\nOR=>%d",OR);
    printf("\nXOR=>%d",XOR);
    return 0;
}