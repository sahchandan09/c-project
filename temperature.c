#include<stdio.h>
#include <conio.h>
int main()
{
    float c,f;
    printf("Enter the value of temperature in centigdade:");
    scanf("%f",&c);
    f=((c/5)*9)+32;
    printf("The temprature in fahrenheit is:%.2f",f);
    return 0;
}