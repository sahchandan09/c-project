#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

    float a,b,c,discriminant,root1,root2;
    printf("Enter the value of coefficient of qadratic equaton:");
    printf("\nCoefficient of X^2 is:");
    scanf("%f",&a);
    printf("\ncoefficient of X is:");
    scanf("%f",&b);
    printf("\nEnter the constant:");
    scanf("%f",&c);
    discriminant=(b*b-4*a*c);
    root1=(-b+sqrt(discriminant))/(2*a);
    root2=(-b-sqrt(discriminant))/(2*a);
    printf("\nThe square root1 of given equation is:%f",root1);
    printf("\nThe sqare root2 of given equation is:%f",root2);
    return 0;
    
}