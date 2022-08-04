#include<stdio.h>
#include <conio.h>
int main()
{
    char string[10];
    printf("Enter your name in uppercase:");
    scanf("%[A-Z]",&string);
    printf("Your name is %s ",string);
    return 0;
}