#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int t;
    float p,r,i,amount;
    printf("put the value of principal,Time,interest rate:");
    printf("\nThe value of principal is=");
    scanf("%f",&p);
    printf("\nTotal time in year:");
    scanf("%d",&t);
    printf("\nInterest rate:");
    scanf("%f",&r);
    i=p*(pow(1+r/100,t)-1);
    amount=i+p;
    printf("\nTotal interest is:%.2f",i);
    printf("\nTotal amount after intereset is:%.3f",amount);
    return 0;

}