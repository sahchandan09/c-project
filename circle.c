#include<stdio.h>
#include <conio.h>
#define pi 3.14
int main()
{
    int radius;
    float area,circumference;
    printf("Enter the value of radius.");
    printf("\nThe value of radius is:");
    scanf("%d",&radius);
    area=pi*radius*radius;
    circumference=2*pi*radius;
    printf("The area of circle is:%.2f",area);
    printf("\nThe circumference of circle is:%.2f",circumference);
    return 0;
}