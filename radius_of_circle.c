#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
    float r1,r2,r3,area1,area2,area3;
    printf("Enter the radius value of three circle:\t");
    scanf("%f%f%f",&r1,&r2,&r3);
    area1=PI*r1*r1;
    area2=PI*r2*r2;
    area3=PI*r3*r3;
    printf("\nThe area of circle is %.2f\t,%.2f\t,%.2f",area1,area2,area3);
}