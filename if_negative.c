#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter number which you want to be tested:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("The number is negative.");
    }
    printf("The number is positive.");
    return 0;
}