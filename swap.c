#include<stdio.h>
#include <conio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
     printf("\nThe two numbers before swap is %d and %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
     printf("\nThe two numbers after swap is %d and %d",a,b);
     return 0;
}