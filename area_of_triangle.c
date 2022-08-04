#include<stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    float h,b,area;
    printf("Enter the height of triangle:");
    scanf("%f",&h);
    printf("\nEnter the base of triangle:");
    scanf("%f",&b);
    area=(h*b)/2;
    printf("\nThe area of triange is=%.2f",area);
    return 0;

}