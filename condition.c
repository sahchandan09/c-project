#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,larger;
    printf("Enter the two number:");
    scanf("%d\t%d",&n1,&n2);
    larger=n1>n2 ? n1:n2;
    printf("The largest number is %d",larger);
    return 0;
}