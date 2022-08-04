#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a and b:");
    scanf("%d\t%d",&a,&b);
    c=a/b;
    d=a%b;
    printf("\nDivision of a and b is:%d",c);
    printf("\nThe modulo of a and b is:%d",d);
    return 0;
}