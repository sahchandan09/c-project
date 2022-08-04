#include<stdio.h>
#include<conio.h>
int main ()

{
    int num,count=0;
    printf("Enter the number which digit is to be calculated: ");
    scanf("%d",&num);
    while(num)
    {
        num=num/10;
        count++;
    }
    printf("The number of digits is   %d",count);
    return 0;
}